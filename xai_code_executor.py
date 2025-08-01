import os
import sys
import shutil
import subprocess
import tempfile
import signal
import re
import pandas as pd
from pathlib import Path
from typing import Set, List, Tuple, Optional


RESULTS_FOLDER = "results"
ACCEPTED_CODE_FOLDER = os.path.join(RESULTS_FOLDER, "accepted_followup")
COMPILE_FAIL_FOLDER = os.path.join(RESULTS_FOLDER, "compile_fail_followup")
SYNTAX_FAIL_FOLDER = os.path.join(RESULTS_FOLDER, "syntax_fail_followup")
EXECUTION_FOLDER = os.path.join(RESULTS_FOLDER, "execution_followup")
TASK = "str_substring"
CHECKPOINT = False


class CodeExecutor:
    def __init__(self):
        self.accepted_code_folder = Path(ACCEPTED_CODE_FOLDER)
        self.compile_fail_folder = Path(COMPILE_FAIL_FOLDER)
        self.syntax_fail_folder = Path(SYNTAX_FAIL_FOLDER)
        self.output_folder = Path(EXECUTION_FOLDER)
        self.progress_file = Path(RESULTS_FOLDER) / "execution_followup_metrics.csv"

        # Language file extensions
        self.language_extensions = {
            ".c": "C",
            ".cpp": "C++",
            ".cc": "C++",
            ".cxx": "C++",
            ".go": "Go",
            ".java": "Java",
            ".js": "Javascript",
            ".py": "Python",
            ".rs": "Rust",
        }

        # Track cancellation
        self.cancelled = False
        signal.signal(signal.SIGINT, self._signal_handler)
        signal.signal(signal.SIGTERM, self._signal_handler)

        # Initialize progress tracking
        self.progress_df = self._load_progress()

        # Create output folder if it doesn't exist
        self.output_folder.mkdir(parents=True, exist_ok=True)

    def _signal_handler(self, signum, frame):
        """Handle cancellation signals"""
        print(f"\nReceived signal {signum}. Saving progress and exiting...")
        self.cancelled = True
        self._save_progress()
        sys.exit(0)

    def _load_progress(self) -> pd.DataFrame:
        """Load progress from CSV file or create new dataframe"""
        if self.progress_file.exists():
            try:
                df = pd.read_csv(self.progress_file)
                print(f"Loaded progress: {len(df)} files already processed")
                return df
            except Exception as e:
                print(f"Error loading progress file: {e}")

        return pd.DataFrame(columns=["model", "task", "from_lang", "to_lang", "run"])

    def _save_progress(self):
        """Save progress to CSV file"""
        try:
            self.progress_df.to_csv(self.progress_file, index=False)
            print(f"Progress saved to {self.progress_file}")
        except Exception as e:
            print(f"Error saving progress: {e}")

    def _get_files_to_execute(self) -> List[Path]:
        """Get list of files to execute (reference - error)"""
        # Get all code files from reference folder
        reference_files = set()
        for ext in self.language_extensions.keys():
            reference_files.update(self.accepted_code_folder.glob(f"**/*{TASK}*{ext}"))

        # Get all files from error folders
        compile_error_files = set()
        if self.compile_fail_folder.exists():
            for ext in self.language_extensions.keys():
                compile_error_files.update(
                    self.compile_fail_folder.glob(f"**/*{TASK}*.txt")
                )

        syntax_error_files = set()
        if self.syntax_fail_folder.exists():
            for ext in self.language_extensions.keys():
                syntax_error_files.update(
                    self.syntax_fail_folder.glob(f"**/*{TASK}*.txt")
                )

        # Convert to relative paths for comparison
        reference_relative = {
            f.relative_to(self.accepted_code_folder).stem for f in reference_files
        }
        compile_error_relative = {
            f.relative_to(self.compile_fail_folder).stem
            for f in compile_error_files
            if f.exists()
        }
        syntax_error_relative = {
            f.relative_to(self.syntax_fail_folder).stem
            for f in syntax_error_files
            if f.exists()
        }

        # Files to execute = reference - error
        files_to_execute = (
            reference_relative - compile_error_relative - syntax_error_relative
        )
        files_to_execute = {
            f"{x}.{x.split("-")[-1]}"
            for x in files_to_execute
        }

        # Convert back to full paths
        return [self.accepted_code_folder / f for f in files_to_execute]

    def _get_processed_files(self) -> Set[str]:
        """Get set of already processed files"""
        if not self.progress_df.empty:
            filenames = set()
            for model, task, from_lang, to_lang, _ in self.progress_df.itertuples(
                index=False, name=None
            ):
                filenames.add(f"{model}-{task}-{from_lang}-{to_lang}.{to_lang}")
            return filenames
        return set()

    def _extract_java_class_name(self, file_path: Path) -> Optional[str]:
        """Extract the main class name from a Java file"""
        try:
            with open(file_path, "r", encoding="utf-8") as f:
                content = f.read()

            # Look for public class with main method
            class_pattern = r"public\s+class\s+(\w+)"

            classes = re.findall(class_pattern, content)

            if classes:
                return classes[0]
            return None
        except Exception as e:
            print(f"Error extracting Java class name from {file_path}: {e}")
            return None

    def _execute_c(self, file_path: Path, temp_dir: Path) -> Tuple[str, str, int]:
        """Execute C file"""
        source_file = temp_dir / file_path.name
        executable = temp_dir / "program"

        shutil.copy2(file_path, source_file)
        if CHECKPOINT:
            shutil.copy2(file_path, temp_dir / "input.txt")
            folder_path = temp_dir / "docs"
            folder_path.mkdir(parents=True, exist_ok=True)

        # Compile
        compile_result = subprocess.run(
            ["gcc", str(source_file), "-o", str(executable)],
            capture_output=True,
            text=True,
            timeout=30,
        )

        if compile_result.returncode != 0:
            return "", compile_result.stderr, compile_result.returncode

        # Execute
        run_result = subprocess.run(
            [str(executable)], capture_output=True, text=True, timeout=30, cwd=temp_dir
        )

        return run_result.stdout, run_result.stderr, run_result.returncode

    def _execute_cpp(self, file_path: Path, temp_dir: Path) -> Tuple[str, str, int]:
        """Execute C++ file"""
        source_file = temp_dir / file_path.name
        executable = temp_dir / "program"

        shutil.copy2(file_path, source_file)
        if CHECKPOINT:
            shutil.copy2(file_path, temp_dir / "input.txt")
            folder_path = temp_dir / "docs"
            folder_path.mkdir(parents=True, exist_ok=True)

        # Compile
        compile_result = subprocess.run(
            ["g++", str(source_file), "-o", str(executable)],
            capture_output=True,
            text=True,
            timeout=30,
        )

        if compile_result.returncode != 0:
            return "", compile_result.stderr, compile_result.returncode

        # Execute
        run_result = subprocess.run(
            [str(executable)], capture_output=True, text=True, timeout=30, cwd=temp_dir
        )

        return run_result.stdout, run_result.stderr, run_result.returncode

    def _execute_go(self, file_path: Path, temp_dir: Path) -> Tuple[str, str, int]:
        """Execute Go file"""
        source_file = temp_dir / file_path.name
        shutil.copy2(file_path, source_file)
        if CHECKPOINT:
            shutil.copy2(file_path, temp_dir / "input.txt")
            folder_path = temp_dir / "docs"
            folder_path.mkdir(parents=True, exist_ok=True)

        # Go run
        run_result = subprocess.run(
            ["go", "run", str(source_file)],
            capture_output=True,
            text=True,
            timeout=30,
            cwd=temp_dir,
        )

        return run_result.stdout, run_result.stderr, run_result.returncode

    def _execute_java(self, file_path: Path, temp_dir: Path) -> Tuple[str, str, int]:
        """Execute Java file"""
        class_name = self._extract_java_class_name(file_path)
        if not class_name:
            return "", "Could not extract class name from Java file", 1

        # Copy and rename file to match class name
        java_file = temp_dir / f"{class_name}.java"
        shutil.copy2(file_path, java_file)
        if CHECKPOINT:
            shutil.copy2(file_path, temp_dir / "input.txt")
            folder_path = temp_dir / "docs"
            folder_path.mkdir(parents=True, exist_ok=True)

        # Compile
        compile_result = subprocess.run(
            ["javac", str(java_file)],
            capture_output=True,
            text=True,
            timeout=30,
            cwd=temp_dir,
        )

        if compile_result.returncode != 0:
            return "", compile_result.stderr, compile_result.returncode

        # Execute
        run_result = subprocess.run(
            ["java", class_name],
            capture_output=True,
            text=True,
            timeout=30,
            cwd=temp_dir,
        )

        return run_result.stdout, run_result.stderr, run_result.returncode

    def _execute_javascript(
        self, file_path: Path, temp_dir: Path
    ) -> Tuple[str, str, int]:
        """Execute Javascript file"""
        source_file = temp_dir / file_path.name
        shutil.copy2(file_path, source_file)
        if CHECKPOINT:
            shutil.copy2(file_path, temp_dir / "input.txt")
            folder_path = temp_dir / "docs"
            folder_path.mkdir(parents=True, exist_ok=True)

        run_result = subprocess.run(
            ["node", str(source_file)],
            capture_output=True,
            text=True,
            timeout=30,
            cwd=temp_dir,
        )

        return run_result.stdout, run_result.stderr, run_result.returncode

    def _execute_python(self, file_path: Path, temp_dir: Path) -> Tuple[str, str, int]:
        """Execute Python file"""
        source_file = temp_dir / file_path.name
        shutil.copy2(file_path, source_file)
        if CHECKPOINT:
            shutil.copy2(file_path, temp_dir / "input.txt")
            folder_path = temp_dir / "docs"
            folder_path.mkdir(parents=True, exist_ok=True)

        run_result = subprocess.run(
            ["python3", str(source_file)],
            capture_output=True,
            text=True,
            timeout=30,
            cwd=temp_dir,
        )

        return run_result.stdout, run_result.stderr, run_result.returncode

    def _execute_rust(self, file_path: Path, temp_dir: Path) -> Tuple[str, str, int]:
        """Execute Rust file"""
        # Create minimal Cargo project
        project_dir = temp_dir / "rust_project"
        project_dir.mkdir()

        # Create Cargo.toml
        cargo_toml = project_dir / "Cargo.toml"
        with open(cargo_toml, "w") as f:
            f.write(
                """[package]
name = "temp_project"
version = "0.1.0"
edition = "2021"

[[bin]]
name = "main"
path = "src/main.rs"
"""
            )

        # Create src directory and copy file
        src_dir = project_dir / "src"
        src_dir.mkdir()
        main_rs = src_dir / "main.rs"
        shutil.copy2(file_path, main_rs)
        if CHECKPOINT:
            shutil.copy2(file_path, project_dir / "input.txt")
            folder_path = project_dir / "docs"
            folder_path.mkdir(parents=True, exist_ok=True)

        # Build and run
        run_result = subprocess.run(
            ["cargo", "run", "--quiet", "--bin", "main"],
            capture_output=True,
            text=True,
            timeout=60,
            env=dict(os.environ, **{"RUSTFLAGS": "-Awarnings"}),
            cwd=project_dir,
        )

        return run_result.stdout, run_result.stderr, run_result.returncode

    def _execute_file(self, file_path: Path) -> Tuple[str, str, bool]:
        """Execute a single file and return stdout, stderr, success"""
        file_ext = file_path.suffix.lower()
        language = self.language_extensions.get(file_ext)

        if not language:
            return "", f"Unsupported file extension: {file_ext}", False

        try:
            with tempfile.TemporaryDirectory() as temp_dir:
                temp_path = Path(temp_dir)

                if language == "C":
                    stdout, stderr, returncode = self._execute_c(file_path, temp_path)
                elif language == "C++":
                    stdout, stderr, returncode = self._execute_cpp(file_path, temp_path)
                elif language == "Go":
                    stdout, stderr, returncode = self._execute_go(file_path, temp_path)
                elif language == "Java":
                    stdout, stderr, returncode = self._execute_java(
                        file_path, temp_path
                    )
                elif language == "Javascript":
                    stdout, stderr, returncode = self._execute_javascript(
                        file_path, temp_path
                    )
                elif language == "Python":
                    stdout, stderr, returncode = self._execute_python(
                        file_path, temp_path
                    )
                elif language == "Rust":
                    stdout, stderr, returncode = self._execute_rust(
                        file_path, temp_path
                    )
                else:
                    return "", f"Unsupported language: {language}", False

                # Success if no stderr output (regardless of return code)
                success = len(stderr.strip()) == 0
                return stdout, stderr, success

        except subprocess.TimeoutExpired:
            return "", "Execution timeout", False
        except Exception as e:
            return "", f"Execution error: {str(e)}", False

    def _save_output(self, filename: str, stdout: str, stderr: str):
        """Save stdout and stderr to files"""
        base_name = Path(filename).stem

        # Save stdout
        if stdout:
            stdout_file = self.output_folder / f"{base_name}_stdout.txt"
            with open(stdout_file, "w", encoding="utf-8") as f:
                f.write(stdout)

        # Save stderr
        if stderr:
            stderr_file = self.output_folder / f"{base_name}_stderr.txt"
            with open(stderr_file, "w", encoding="utf-8") as f:
                f.write(stderr)

    def execute_all(self):
        """Execute all files with progress tracking"""
        files_to_execute = self._get_files_to_execute()
        processed_files = self._get_processed_files()

        print(f"Found {len(files_to_execute)} files to execute")
        print(f"Already processed: {len(processed_files)} files")

        remaining_files = [
            f
            for f in files_to_execute
            if str(f.relative_to(self.accepted_code_folder)) not in processed_files
        ]

        print(f"Remaining files to process: {len(remaining_files)}")

        for i, file_path in enumerate(remaining_files):
            if self.cancelled:
                break

            relative_path = file_path.relative_to(self.accepted_code_folder)
            print(f"Processing [{i+1}/{len(remaining_files)}]: {relative_path}")
            model, task, from_lang, to_lang = relative_path.stem.split("-")

            try:
                stdout, stderr, success = self._execute_file(file_path)

                # Save output files
                self._save_output(str(relative_path), stdout, stderr)

                # Update progress
                new_row = pd.DataFrame(
                    {
                        "model": [model],
                        "task": [task],
                        "from_lang": [from_lang],
                        "to_lang": [to_lang],
                        "run": [1.0 if success else 0.0],
                    }
                )
                self.progress_df = pd.concat(
                    [self.progress_df, new_row], ignore_index=True
                )

                # Save progress periodically
                if (i + 1) % 10 == 0:
                    self._save_progress()

                status = "SUCCESS" if success else "FAILED"
                print(f"  -> {status}")

            except Exception as e:
                print(f"  -> ERROR: {e}")
                # Still record as failed
                new_row = pd.DataFrame(
                    {
                        "model": [model],
                        "task": [task],
                        "from_lang": [from_lang],
                        "to_lang": [to_lang],
                        "run": [0.0],
                    }
                )
                self.progress_df = pd.concat(
                    [self.progress_df, new_row], ignore_index=True
                )

        # Save final progress
        self._save_progress()

        # Print summary
        total_processed = len(self.progress_df)
        successful = len(self.progress_df[self.progress_df["run"] == 1.0])
        failed = total_processed - successful

        print(f"\nExecution Summary:")
        print(f"Total processed: {total_processed}")
        print(f"Successful: {successful}")
        print(f"Failed: {failed}")
        print(f"Progress saved to: {self.progress_file}")


def main():
    # Create executor and run
    executor = CodeExecutor()

    try:
        executor.execute_all()
    except KeyboardInterrupt:
        print("\nExecution cancelled by user")
        executor._save_progress()
    except Exception as e:
        print(f"Unexpected error: {e}")
        executor._save_progress()
        raise


if __name__ == "__main__":
    os.makedirs(EXECUTION_FOLDER, exist_ok=True)
    main()

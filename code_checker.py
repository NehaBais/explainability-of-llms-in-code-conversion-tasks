import os
import re
import shutil
import logging
import subprocess

RESULTS_FOLDER = "results"
ACCEPTED_CODE_FOLDER = os.path.join(RESULTS_FOLDER, "accepted_code")
COMPILE_FAIL_FOLDER = os.path.join(RESULTS_FOLDER, "compile_fail")
SYNTAX_FAIL_FOLDER = os.path.join(RESULTS_FOLDER, "syntax_fail")

# Set up logging
logging.basicConfig(
    filename=os.path.join(RESULTS_FOLDER, "compilation_log.txt"),
    level=logging.INFO,
    format="%(asctime)s - %(message)s",
    datefmt="%Y-%m-%d %H:%M:%S",
)


completed_files = [
    [y.strip() for y in x.strip().split(":")][3]
    for x in open(os.path.join(RESULTS_FOLDER, "compilation_log.txt"), "r").readlines()
]


def extract_public_class_name(file_path):
    try:
        with open(file_path, "r") as file:
            content = file.read()

            # Regular expression to match public class declaration
            pattern = r"public\s+class\s+(\w+)"

            match = re.search(pattern, content)
            if match:
                return match.group(1)
            else:
                return None
    except FileNotFoundError:
        print(f"Error: File '{file_path}' not found.")
        return None
    except Exception as e:
        print(f"An error occurred: {str(e)}")
        return None


def rename_java_file(file_path):
    main_class = extract_public_class_name(file_path)
    directory = os.path.dirname(file_path)
    new_file_name = f"{main_class}.java"
    new_file_path = os.path.join(directory, new_file_name)
    os.rename(file_path, new_file_path)
    return new_file_path


def check_file(file_path):
    filename = os.path.basename(file_path)
    tmp_path = os.path.join("/tmp", filename)

    if filename in completed_files:
        return

    # Copy file to /tmp
    shutil.copy2(file_path, tmp_path)

    extension = os.path.splitext(filename)[1]
    if extension == ".c":
        compile_cmd = ["gcc", tmp_path, "-o", f"{tmp_path}.out"]
        syntax_cmd = ["gcc", "-fsyntax-only", tmp_path]
    elif extension == ".cpp":
        compile_cmd = ["g++", tmp_path, "-o", f"{tmp_path}.out"]
        syntax_cmd = ["g++", "-fsyntax-only", tmp_path]
    elif extension == ".go":
        compile_cmd = ["go", "build", "-o", f"{tmp_path}.out", tmp_path]
        syntax_cmd = ["go", "vet", tmp_path]
    elif extension == ".java":
        tmp_path = rename_java_file(tmp_path)
        compile_cmd = ["javac", tmp_path]
        syntax_cmd = ["javac", "-Werror", tmp_path]
    elif extension == ".js":
        compile_cmd = None
        syntax_cmd = ["node", "--check", file_path]
    elif extension == ".py":
        compile_cmd = None
        syntax_cmd = [
            "python",
            "-c",
            f'import ast; ast.parse(open("{file_path}").read())',
        ]
    elif extension == ".rs":
        compile_cmd = ["rustc", tmp_path, "-o", f"{tmp_path}.out"]
        syntax_cmd = ["rustc", "--emit=dep-info", tmp_path, "-o", f"{tmp_path}.out"]
    else:
        logging.error(f"Unsupported file type: {filename}")
        return

    # Compilation (if needed)
    if compile_cmd:
        try:
            _ = subprocess.run(
                compile_cmd,
                capture_output=True,
                text=True,
                check=True,
            )
            logging.info(f"Compilation successful: {filename}")
        except subprocess.CalledProcessError as e:
            open(
                os.path.join(
                    COMPILE_FAIL_FOLDER, f"{os.path.splitext(filename)[0]}.txt"
                ),
                "w",
            ).write(e.stderr)
            try:
                _ = subprocess.run(
                    syntax_cmd, capture_output=True, text=True, check=True
                )
                logging.info(f"Compilation failed: {filename}")
            except subprocess.CalledProcessError as e:
                open(
                    os.path.join(
                        SYNTAX_FAIL_FOLDER, f"{os.path.splitext(filename)[0]}.txt"
                    ),
                    "w",
                ).write(e.stderr)
                logging.info(f"Compilation and Syntax check failed: {filename}")
    else:
        try:
            _ = subprocess.run(syntax_cmd, capture_output=True, text=True, check=True)
            logging.info(f"Syntax check successful: {filename}")
        except subprocess.CalledProcessError as e:
            open(
                os.path.join(
                    SYNTAX_FAIL_FOLDER, f"{os.path.splitext(filename)[0]}.txt"
                ),
                "w",
            ).write(e.stderr)
            logging.info(f"Syntax check failed: {filename}")

    # Clean up
    if os.path.exists(tmp_path):
        os.remove(tmp_path)
    if os.path.exists(f"{tmp_path}.out"):
        os.remove(f"{tmp_path}.out")
    if extension == ".java":
        class_file = os.path.join("/tmp", f"{os.path.splitext(filename)[0]}.class")
        if os.path.exists(class_file):
            os.remove(class_file)


def main():
    for filename in os.listdir(ACCEPTED_CODE_FOLDER):
        if filename.startswith("."):
            continue
        file_path = os.path.join(ACCEPTED_CODE_FOLDER, filename)
        if os.path.isfile(file_path):
            check_file(file_path)


if __name__ == "__main__":
    os.makedirs(COMPILE_FAIL_FOLDER, exist_ok=True)
    os.makedirs(SYNTAX_FAIL_FOLDER, exist_ok=True)
    main()

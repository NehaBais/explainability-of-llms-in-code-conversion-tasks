import os
import re
import ast
import shutil
import logging
import subprocess

RESULTS_FOLDER = "results"
ACCEPTED_CODE_FOLDER = os.path.join(RESULTS_FOLDER, "accepted_code")

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


def check_python_syntax(file_path):
    with open(file_path, "r") as file:
        source = file.read()
    try:
        ast.parse(source)
        return True
    except SyntaxError:
        return False


def check_javascript_syntax(file_path):
    cmd = ["node", "--check", file_path]
    result = subprocess.run(cmd, capture_output=True, text=True)
    return result.returncode == 0


def check_file(file_path):
    filename = os.path.basename(file_path)
    tmp_path = os.path.join("/tmp", filename)

    if filename in completed_files:
        return

    # Copy file to /tmp
    shutil.copy2(file_path, tmp_path)

    extension = os.path.splitext(filename)[1]

    try:
        if extension == ".c":
            compile_cmd = ["gcc", tmp_path, "-o", f"{tmp_path}.out"]
            syntax_cmd = ["gcc", "-fsyntax-only", tmp_path]
            execute_cmd = None  # [f"{tmp_path}.out"]
        elif extension == ".cpp":
            compile_cmd = ["g++", tmp_path, "-o", f"{tmp_path}.out"]
            syntax_cmd = ["g++", "-fsyntax-only", tmp_path]
            execute_cmd = None  # [f"{tmp_path}.out"]
        elif extension == ".go":
            compile_cmd = ["go", "build", "-o", f"{tmp_path}.out", tmp_path]
            syntax_cmd = ["go", "vet", tmp_path]
            execute_cmd = None  # [f"{tmp_path}.out"]
        elif extension == ".java":
            tmp_path = rename_java_file(tmp_path)
            compile_cmd = ["javac", tmp_path]
            syntax_cmd = ["javac", "-Werror", tmp_path]
            execute_cmd = None  # ["java", "-cp", "/tmp", os.path.splitext(filename)[0]]
        elif extension == ".js":
            compile_cmd = None
            execute_cmd = None  # ["node", tmp_path]
            if check_javascript_syntax(tmp_path):
                logging.info(f"Syntax check successful: {filename}")
            else:
                logging.error(f"Syntax check failed: {filename}")
        elif extension == ".py":
            compile_cmd = None
            execute_cmd = None  # ["python", tmp_path]
            if check_python_syntax(tmp_path):
                logging.info(f"Syntax check successful: {filename}")
            else:
                logging.error(f"Syntax check failed: {filename}")
        elif extension == ".rs":
            compile_cmd = ["rustc", tmp_path, "-o", f"{tmp_path}.out"]
            syntax_cmd = ["rustc", "--emit=dep-info", tmp_path, "-o", f"{tmp_path}.out"]
            execute_cmd = None  # [f"{tmp_path}.out"]
        else:
            logging.error(f"Unsupported file type: {filename}")
            return

        # Compilation (if needed)
        if compile_cmd:
            subprocess.run(
                compile_cmd, check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE
            )
            logging.info(f"Compilation successful: {filename}")

        # Execution
        if execute_cmd:
            subprocess.run(
                execute_cmd, check=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE
            )
            logging.info(f"Execution successful: {filename}")

    except subprocess.CalledProcessError as e:
        if compile_cmd:
            result = subprocess.run(syntax_cmd, capture_output=True, text=True)
            if result.returncode == 0:
                logging.info(f"Syntax check successful: {filename}")
            else:
                logging.error(f"Compilation and syntax check failed: {filename}: {e}")
        else:
            logging.error(f"Execution failed: {filename}: {e}")
    finally:
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
    main()

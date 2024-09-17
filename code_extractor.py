import shutil
import os
import re

RESULTS_FOLDER = "results"
GENERATED_CODE_FOLDER = os.path.join(RESULTS_FOLDER, "generated_code")
ACCEPTED_CODE_FOLDER = os.path.join(RESULTS_FOLDER, "accepted_code")
REJECTED_CODE_FOLDER = os.path.join(RESULTS_FOLDER, "rejected_code")
# referenced from https://stackoverflow.com/q/76269934
PATTERN = r"^```(?:[\w+]+)?\s*\n(.*?)(?=^```)```"


def extract_code(filepath):
    filename = filepath.split(".")[0].split(os.sep)[-1]
    extension = filename.split("-")[-1]
    if os.path.exists(os.path.join(ACCEPTED_CODE_FOLDER, f"{filename}.{extension}")):
        return
    if os.path.exists(os.path.join(REJECTED_CODE_FOLDER, f"{filename}.md")):
        return
    markdown_code = open(filepath, "r").read().strip()
    code = re.findall(PATTERN, markdown_code, re.DOTALL | re.MULTILINE)
    try:
        if len(code) > 1:
            shutil.copyfile(
                filepath, os.path.join(REJECTED_CODE_FOLDER, f"{filename}.md")
            )
        # the first code block usually contains the code
        code = code[0].strip()
        with open(
            os.path.join(ACCEPTED_CODE_FOLDER, f"{filename}.{extension}"), "w"
        ) as fp:
            fp.write(code)
    except:
        shutil.copyfile(filepath, os.path.join(REJECTED_CODE_FOLDER, f"{filename}.md"))


def main():
    for filename in os.listdir(GENERATED_CODE_FOLDER):
        if filename.startswith("."):
            continue
        file_path = os.path.join(GENERATED_CODE_FOLDER, filename)
        if os.path.isfile(file_path):
            extract_code(file_path)


if __name__ == "__main__":
    main()

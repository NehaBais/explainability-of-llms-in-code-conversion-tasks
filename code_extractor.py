from constants import *
import shutil
import os
import re

RESULTS_FOLDER = "results"
REFERENCE_CODE_FOLDER = os.path.join(RESULTS_FOLDER, "reference_code")
GENERATED_CODE_FOLDER = os.path.join(RESULTS_FOLDER, "generated_code")
ACCEPTED_CODE_FOLDER = os.path.join(RESULTS_FOLDER, "accepted_code")
REJECTED_CODE_FOLDER = os.path.join(RESULTS_FOLDER, "rejected_code")
# referenced from https://stackoverflow.com/q/76269934
PATTERN = r"^```(?:[\w+]+)?\s*\n(.*?)(?=^```)```"


def replace_newlines(match):
    quote = match.group(1)
    content = match.group(2)
    escaped = content.replace("\n", "\\n")
    return f"{quote}{escaped}{quote}"


def extract_code(filepath):
    filename = os.path.basename(filepath)[:-3]
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
            return
        # the first code block usually contains the code
        code = code[0].strip()
        if len(code) == 0:
            shutil.copyfile(
                filepath, os.path.join(REJECTED_CODE_FOLDER, f"{filename}.md")
            )
            return
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

    pattern = r'([\'"])((?:(?!\1).|\n)*?)\1'
    for lang in REFERENCE_CODE.keys():
        for task in REFERENCE_CODE[lang].keys():
            code = REFERENCE_CODE[lang][task]
            filename = f"{task}.{lang.lower()}"
            if os.path.exists(os.path.join(REFERENCE_CODE_FOLDER, filename)):
                continue
            with open(os.path.join(REFERENCE_CODE_FOLDER, filename), "w") as fp:
                code = re.sub(pattern, replace_newlines, code, flags=re.DOTALL)
                fp.write(code.strip())


if __name__ == "__main__":
    main()

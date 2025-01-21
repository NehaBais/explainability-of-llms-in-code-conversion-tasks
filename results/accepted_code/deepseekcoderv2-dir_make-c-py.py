import os
import sys


def mkdir_p(path):
    if not path:
        return

    # Normalize the path by replacing backslashes with slashes on Windows
    normalized_path = os.path.normpath(path)

    # Split the path into parts
    parts = []
    while "/" in normalized_path:
        part, normalized_path = normalized_path.split("/", 1)
        parts.append(part)
    parts.append(normalized_path)

    # Construct the full path
    current_path = ""
    for part in parts:
        current_path = os.path.join(current_path, part)
        if not os.path.isdir(current_path):
            os.mkdir(current_path)


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("usage: {} <path>".format(os.path.basename(sys.argv[0])))
        sys.exit(1)

    path = sys.argv[1]
    mkdir_p(path)

import os
from pathlib import Path

if __name__ == "__main__":
    file_name = (
        sys.argv[1] if len(sys.argv) > 1 else exit_err("No file name supplied", 1)
    )
    file_path = Path(file_name).resolve()
    root_path = Path("/")
    metadata = os.stat(str(root_path / file_path))
    print(f"Size of {file_path} is {metadata.st_size} bytes")


def exit_err(msg, code):
    print(f"Error: {msg}", file=sys.stderr)
    sys.exit(code)

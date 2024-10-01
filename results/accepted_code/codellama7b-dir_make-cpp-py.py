import os
import sys
from pathlib import Path


def mkdir_p(path):
    """Create a directory and any missing parents."""
    path = Path(path)
    if path.exists():
        return 0
    else:
        try:
            os.makedirs(path)
        except OSError as e:
            print("couldn't create directory", path, file=sys.stderr)
            return -1
    return 0


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("usage: mkdir <path>", file=sys.stderr)
        sys.exit(-1)

    path = Path(sys.argv[1])
    rc = mkdir_p(path)
    if rc != 0:
        sys.exit(rc)

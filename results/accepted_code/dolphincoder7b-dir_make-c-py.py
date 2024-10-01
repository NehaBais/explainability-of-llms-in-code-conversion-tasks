import os
from pathlib import Path


def mkdir_p(path):
    path = Path(path)
    if not path.exists():
        path.mkdir(
            parents=True, exist_ok=False
        )  # If we get an error, it's because the directory already exists and is not a regular file.


# Test
if __name__ == "__main__":
    mkdir_p("dir1/dir2/dir3")
    print(os.listdir())  # ["dir1", "dir2", "dir3"]

import os
from pathlib import Path


def mkdir_p(path):
    p = Path(path)
    if not p.exists():
        p.mkdir(parents=True, exist_ok=True)


# Example usage:
mkdir_p("/tmp/some/path/to/dir")

import os
from pathlib import Path

fileA = Path("input.txt")
print(f"{fileA.stat().st_size} B")
fileB = Path("/file.txt")
print(f"{fileB.stat().st_size} B")

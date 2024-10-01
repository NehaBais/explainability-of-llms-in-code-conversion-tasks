from pathlib import Path


def create_directory(path):
    dir = Path(path)
    if not dir.exists():
        dir.mkdir(parents=True, exist_ok=True)

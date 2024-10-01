import os
import io
from pathlib import Path


def create(root):
    file = Path(f"{str(root)}/{os.path.basename(__file__)}").with_suffix(".txt")
    dir = Path(f"{str(root)}/{os.path.basename(__file__)}")

    try:
        if not os.path.exists(str(dir)):
            os.makedirs(dir)
        with open(file, "w") as f:
            pass
        return True
    except Exception as e:
        print("Error:", str(e))
        return False


if __name__ == "__main__":
    create(".") and create("/")

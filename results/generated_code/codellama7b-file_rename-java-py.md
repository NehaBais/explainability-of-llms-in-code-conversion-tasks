```python
import os

def rename_file(oldname, newname):
    # Rename file (or directory)
    return os.rename(oldname, newname)

if __name__ == "__main__":

    # Rename file input.txt to output.txt in the current working directory
    rename_file("input.txt", "output.txt")

    # Rename file /input.txt to /output.txt in the filesystem root
    rename_file("/input.txt", "/output.txt")

    # Rename directory docs to mydocs in the current working directory
    rename_file("docs", "mydocs")

    # Rename directory /docs to /mydocs in the filesystem root
    rename_file("/docs/", "/mydocs/")
```
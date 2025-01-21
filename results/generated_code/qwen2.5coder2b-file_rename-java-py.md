Here is the Python equivalent of your Java code:

```python
import os

def rename_file(oldname, newname):
    try:
        # Rename file (or directory)
        os.rename(oldname, newname)
        return True
    except Exception as e:
        print(f"Failed to rename {oldname} to {newname}: {e}")
        return False


def test(type, oldname, newname):
    print(f"The following {type} called {oldname} {(rename_file(oldname, newname) and 'was renamed as' or 'could not be renamed into')} {newname}.")


if __name__ == "__main__":
    test("file", "input.txt", "output.txt")
    test("file", os.path.join(os.getcwd(), "input.txt"), os.path.join(os.getcwd(), "output.txt"))
    test("directory", "docs", "mydocs")
    test("directory", os.path.join(os.getcwd(), "docs"), os.path.join(os.getcwd(), "mydocs"))
```
In this Python code, the `os.rename()` function is used for renaming files and directories. It will raise an exception if the renaming fails. If no error occurs, it will return True. The `test` function outputs whether the file or directory was successfully renamed or not.

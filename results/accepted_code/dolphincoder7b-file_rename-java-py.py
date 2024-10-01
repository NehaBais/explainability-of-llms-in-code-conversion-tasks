from os import rename
from os.path import dirname, join


def rename_file(old_name, new_name):
    """Rename a file"""
    try:
        rename(old_name, new_name)
        return True
    except Exception as e:
        print("Error occurred:", e)
        return False


def test_rename(type, old_name, new_name):
    """Test renaming of files or directories"""
    if rename_file(old_name, new_name):
        print(f"The {type} called {old_name} was renamed as {new_name}.")
    else:
        print(f"The {type} called {old_name} could not be renamed into {new_name}.")


if __name__ == "__main__":
    test_rename("file", "input.txt", "output.txt")
    test_rename(
        "file",
        join(dirname(__file__), "input.txt"),
        join(dirname(__file__), "output.txt"),
    )
    test_rename("directory", "docs", "mydocs")
    test_rename(
        "directory", join(dirname(__file__), "docs"), join(dirname(__file__), "mydocs")
    )

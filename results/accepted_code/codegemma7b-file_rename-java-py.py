import os

def rename_file(oldname, newname):
    """Renames a file or directory."""
    if os.path.exists(oldname):
        os.rename(oldname, newname)
        return True
    else:
        return False

def test(type, oldname, newname):
    """Tests the rename_file function."""
    print(f"The following {type} called {oldname}"
          f"{(rename_file(oldname, newname) ? ' was renamed as ' : ' could not be renamed into ')}{newname}.")

if __name__ == "__main__":
    # Rename file in current working directory
    test("file", "input.txt", "output.txt")

    # Rename file in root directory
    test("file", os.path.join("/", "input.txt"), os.path.join("/", "output.txt"))

    # Rename directory in current working directory
    test("directory", "docs", "mydocs")

    # Rename directory in root directory
    test("directory", os.path.join("/", "docs"), os.path.join("/", "mydocs"))
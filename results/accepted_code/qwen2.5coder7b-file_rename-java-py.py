import os


def rename_file(oldname, newname):
    # Rename file (or directory)
    success = os.rename(oldname, newname) is not None
    return success


def test(type_name, oldname, newname):
    print(
        f"The following {type_name} called {oldname} "
        f"{'was renamed as' if rename_file(oldname, newname) else 'could not be renamed into'} "
        f"{newname}."
    )


if __name__ == "__main__":
    # Current working directory
    test("file", "input.txt", "output.txt")
    test("directory", "docs", "mydocs")

    # Filesystem root (Note: The filesystem root can vary between operating systems)
    if os.name == "nt":  # Windows
        separator = "\\"
    else:  # Unix-like (Linux, macOS)
        separator = "/"

    root_path = f"{separator}"

    test("file", root_path + "input.txt", root_path + "output.txt")
    test("directory", root_path + "docs" + separator, root_path + "mydocs" + separator)

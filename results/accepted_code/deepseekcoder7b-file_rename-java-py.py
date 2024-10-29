import os


def rename_item(oldname, newname):
    try:
        os.rename(oldname, newname)
        return True
    except Exception as e:
        print("Exception occurred: ", e)
        return False


def test(type, oldname, newname):
    success = rename_item(oldname, newname)
    if success:
        print(
            "The following "
            + type
            + " called "
            + oldname
            + " was renamed as "
            + newname
            + "."
        )
    else:
        print(
            "The following "
            + type
            + " called "
            + oldname
            + " could not be renamed into "
            + newname
            + "."
        )


def main():
    test("file", "input.txt", "output.txt")
    test(
        "file", "\\" + "input.txt", "\\" + "output.txt"
    )  # for windows use '\' instead of '/' in path
    test("directory", "docs", "mydocs")
    test(
        "directory", "\\" + "docs" + "\\", "\\" + "mydocs" + "\\"
    )  # for windows use '\' instead of '/' in path


if __name__ == "__main__":
    main()

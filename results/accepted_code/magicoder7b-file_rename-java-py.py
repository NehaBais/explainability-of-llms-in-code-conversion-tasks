import os


def rename_file(oldname, newname):
    try:
        os.rename(oldname, newname)
        return True
    except OSError as e:
        print("Could not rename", oldname, "into", newname, ": ", e)
        return False


def test(type, oldname, newname):
    if type == "file":
        print(
            "The following",
            type,
            "called",
            oldname,
            (
                "was renamed as"
                if rename_file(oldname, newname)
                else "could not be renamed into"
            ),
            newname + ".",
        )
    elif type == "directory":
        print(
            "The following",
            type,
            "called",
            oldname,
            (
                "was renamed as"
                if rename_file(oldname, newname)
                else "could not be renamed into"
            ),
            newname + ".",
        )


if __name__ == "__main__":
    test("file", "input.txt", "output.txt")
    test("directory", os.sep + "docs", os.sep + "mydocs")

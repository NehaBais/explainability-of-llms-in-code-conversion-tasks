import os
import sys


def renameFile(oldname, newname):
    # Rename file (or directory)
    return os.rename(oldname, newname)


def test(type, oldname, newname):
    print(
        "The following {} called {} was renamed as {} if successful or could not be renamed into {}.".format(
            type, oldname, newname, newname
        )
    )


if __name__ == "__main__":
    # Test for file rename
    test("file", "input.txt", "output.txt")

    # Test for directory rename
    test(
        "directory",
        os.path.join(os.getcwd(), "docs"),
        os.path.join(os.getcwd(), "mydocs"),
    )

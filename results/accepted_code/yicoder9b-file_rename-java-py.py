import os


def rename(oldname, newname):
    try:
        os.rename(oldname, newname)
        return True
    except OSError:
        return False


def test(type_, oldname, newname):
    print(
        "The following "
        + type_
        + " called "
        + oldname
        + (
            " was renamed as "
            if rename(oldname, newname)
            else " could not be renamed into "
        )
        + newname
        + "."
    )


test("file", "input.txt", "output.txt")
test("file", "/input.txt", "/output.txt")
test("directory", "docs", "mydocs")
test("directory", "/docs/", "/mydocs/")

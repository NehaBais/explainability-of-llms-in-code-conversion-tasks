import os


def rename_file(oldname, newname):
    try:
        os.rename(oldname, newname)
        return True
    except FileNotFoundError:
        return False


def test(type_, oldname, newname):
    print(
        "The following {} called {} was renamed as {}.".format(
            type_,
            oldname,
            newname if rename_file(oldname, newname) else "could not be renamed into",
        )
    )


# Test in the current working directory
test("file", "input.txt", "output.txt")
test("file", os.path.join("/", "input.txt"), os.path.join("/", "output.txt"))
test("directory", "docs", "mydocs")
test("directory", os.path.join("/", "docs"), os.path.join("/", "mydocs"))

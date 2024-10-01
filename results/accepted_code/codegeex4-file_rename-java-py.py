import os


def rename_file(oldname, newname):
    # Rename file (or directory)
    success = os.rename(oldname, newname)
    return success


def test(type_, oldname, newname):
    print(
        "The following {} called {} {}".format(
            type_,
            oldname,
            (
                "was renamed as"
                if rename_file(oldname, newname)
                else "could not be renamed into"
            ),
            newname,
        )
    )


if __name__ == "__main__":
    test("file", "input.txt", "output.txt")
    test("file", os.path.join(os.sep, "input.txt"), os.path.join(os.sep, "output.txt"))
    test("directory", "docs", "mydocs")
    test("directory", os.path.join(os.sep, "docs"), os.path.join(os.sep, "mydocs"))

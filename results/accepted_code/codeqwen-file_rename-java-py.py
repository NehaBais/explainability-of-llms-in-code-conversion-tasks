import os


def rename_file(old_name, new_name):
    try:
        os.rename(old_name, new_name)
        return True
    except FileNotFoundError:
        print("File not found.")
        return False


def test(type, old_name, new_name):
    print(
        "The following "
        + type
        + " called "
        + old_name
        + (
            rename_file(old_name, new_name)
            and " was renamed as"
            or " could not be renamed into"
        )
        + new_name
        + "."
    )


test("file", "input.txt", "output.txt")
test("file", "/input.txt", "/output.txt")
test("directory", "docs", "mydocs")
test("directory", "/docs/", "/mydocs/")

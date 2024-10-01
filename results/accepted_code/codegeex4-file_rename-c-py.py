import os


def rename_files_and_dirs(here=True, root=True):
    if here:
        os.rename("input.txt", "output.txt")
        os.rename("docs", "mydocs")

    if root:
        os.rename("/input.txt", "/output.txt")
        os.rename("/docs", "/mydocs")


# Call the function
rename_files_and_dirs(here=True, root=True)

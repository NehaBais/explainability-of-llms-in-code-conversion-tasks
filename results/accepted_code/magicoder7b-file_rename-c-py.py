import os


def rename_files():
    try:
        # here
        os.rename("input.txt", "output.txt")
        os.rename("docs", "mydocs")

        # filesystem root
        with os.popen("pwd") as p:
            dir = p.read().strip()  # get the current directory path
        os.rename(dir + "/input.txt", dir + "/output.txt")
        os.rename(dir + "/docs", dir + "/mydocs")
    except OSError as e:
        print("Error occurred while renaming files: ", str(e))


# call the function
rename_files()

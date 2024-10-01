import os
import shutil  # Unix-like systems


def rename_files():
    err = "File move error"
    try:
        if not os.path.exists("input.txt"):
            raise FileNotFoundError(err)
        os.rename("input.txt", "output.txt")

        if not os.path.exists("docs"):
            raise FileNotFoundError(err)
        os.rename("docs", "mydocs")
    except FileNotFoundError as e:
        print(e)
        return False
    else:
        return True


def rename_directory():
    if not os.path.exists("/input.txt"):
        raise FileNotFoundError
    os.rename("/input.txt", "/output.txt")

    if not os.path.exists("/docs"):
        raise FileNotFoundError
    os.rename("/docs", "/mydocs")


# Execute the function
try:
    print("File renaming in current directory:", rename_files())
except Exception as e:
    print(e)
finally:
    print("\nRenaming files and directories at root:", rename_directory())

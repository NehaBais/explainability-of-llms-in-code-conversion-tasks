import os
import errno


def rename_file_and_directory():
    try:
        os.rename("input.txt", "output.txt")
        os.rename("docs", "mydocs")
        print(
            "File and directory renamed successfully in the current working directory!"
        )
    except OSError as e:
        if e.errno != errno.ENOENT:  # If error was caused because source wasn't found
            raise

    try:
        os.rename("/input.txt", "/output.txt")
        os.rename("/docs", "/mydocs")
        print("File and directory renamed successfully in the root directory!")
    except OSError as e:
        if e.errno != errno.ENOENT:  # If error was caused because source wasn't found
            raise


# Call the function
rename_file_and_directory()

import os


def rename_files_and_directories():
    current_directory = os.getcwd()

    # Rename in the current directory
    os.rename(
        os.path.join(current_directory, "input.txt"),
        os.path.join(current_directory, "output.txt"),
    )
    os.rename(
        os.path.join(current_directory, "docs"),
        os.path.join(current_directory, "mydocs"),
    )

    # Rename in the filesystem root
    os.rename("/input.txt", "/output.txt")
    os.rename("/docs", "/mydocs")


rename_files_and_directories()

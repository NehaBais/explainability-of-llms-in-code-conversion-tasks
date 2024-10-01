import os


def move_file(current_path):
    # Moves input.txt to output.txt in current directory
    os.rename("input.txt", "output.txt")

    # Moves input.txt to output.txt in filesystem root
    os.rename(
        os.path.join(current_path, "input.txt"),
        os.path.join(current_path, "output.txt"),
    )


def move_folder(current_path):
    # Moves docs folder to mydocs in current directory
    os.rename("docs", "mydocs")

    # Moves c:/docs folder to c:/mydocs
    os.rename(
        os.path.join(current_path, "c:/docs"), os.path.join(current_path, "c:/mydocs")
    )


# Get the current path
current_path = os.getcwd()

move_file(current_path)
move_folder(current_path)

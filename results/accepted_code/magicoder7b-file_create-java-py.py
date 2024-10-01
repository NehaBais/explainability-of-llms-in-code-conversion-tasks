import os


def create_files_and_dirs():
    try:
        # Current working directory
        os.mknod("output.txt")
        os.makedirs("/docs")

        # Root filesystem
        with open("/output.txt", "w"):
            pass
        os.makedirs("/docs")
    except Exception as e:
        print(e)


create_files_and_dirs()

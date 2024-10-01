import os


def fct(err):
    if err:
        print(err)


os.write("output.txt", b"")  # Python does not have bytes in its write method as JS
os.write("/output.txt", b"")  # Same for Python

os.mkdir("docs")  # Directories are created using mkdir() method in python
os.mkdir("/docs", 0o777)  # Same thing here

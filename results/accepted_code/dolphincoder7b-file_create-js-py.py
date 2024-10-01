import os


def write_file(path, content):
    with open(path, "w") as file:
        file.write(content)


os.chdir("C:\\")  # Change to current working directory (CWD)
write_file("output.txt", "")
os.chdir("/")  # Change back to filesystem root ("/")
write_file("/output.txt", "")

if not os.path.exists("docs"):
    os.mkdir("docs")

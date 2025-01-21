import os


def handle_error(err):
    if err:
        print(err)


# Create empty file 'output.txt' in current directory and root directory
os.mknod("output.txt", 0o644)  # This will create an empty file of size 0 bytes.
handle_error(os.system(f"touch /output.txt"))

# Create empty directory 'docs' in current directory and root directory
os.mkdir("docs")
handle_error(os.system("mkdir /docs"))

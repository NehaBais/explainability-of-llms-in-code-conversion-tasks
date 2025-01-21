import os


def main():
    # Create an empty file named "output.txt" in the current working directory
    with open("output.txt", "w") as f:
        pass  # This will create an empty file of size 0 bytes

    # Create an empty directory named "docs" in the current working directory
    os.mkdir("docs")

    # Optionally, you can set permissions for the created files and directories
    # However, Python does not provide a direct way to set POSIX file permissions like C's umask
    # The following lines are commented out because setting permissions in Python is more complex than in C
    # os.chmod("output.txt", 0o640)  # This would be equivalent to chmod 640 output.txt in Unix-like systems
    # os.chmod("docs", 0o750)        # This would be equivalent to chmod 750 docs in Unix-like systems


if __name__ == "__main__":
    main()

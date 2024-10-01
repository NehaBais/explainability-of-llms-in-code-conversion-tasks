import os
import stat


def main():
    # Create an empty file called "output.txt" of size 0 bytes and an empty directory called "docs".
    with open("output.txt", "w") as f:
        pass

    # Create the directory "docs" with permissions 0750 for rwxr-x---
    os.mkdir("docs", stat.S_IRWXU | stat.S_IRGRP | stat.S_IXGRP | stat.S_IROTH)


if __name__ == "__main__":
    main()

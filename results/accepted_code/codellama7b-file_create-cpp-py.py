import os

if __name__ == "__main__":

    # Create a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs". This should be done twice: once "here", i.e. in the current working directory and once in the filesystem root.
    with open("output.txt", "w") as f:
        pass

    os.makedirs("docs")
    os.makedirs(os.sep, exist_ok=True)

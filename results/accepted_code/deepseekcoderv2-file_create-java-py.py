import os

try:
    # Create a new empty file named "output.txt" in the current working directory
    with open("output.txt", "w") as f:
        pass

    # Create an empty directory called "docs" both locally and on the root of the filesystem
    os.makedirs(os.path.join(os.getcwd(), "docs"))
    if not os.path.exists("/docs"):
        os.mkdir("/docs")
except IOError as e:
    print("An error occurred:", str(e))

import os

# Create a new empty file called "output.txt" of size 0 bytes and an empty directory called "docs".
with open("output.txt", "w") as f:
    f.write("")
os.makedirs("docs", exist_ok=True)

# Create the same files in the root directory
with open("/output.txt", "w") as f:
    f.write("")
os.makedirs("/docs", exist_ok=True)

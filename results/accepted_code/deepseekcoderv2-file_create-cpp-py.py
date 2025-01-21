import os

# Create an empty file called "output.txt" in the current working directory
with open("output.txt", "w") as f:
    pass

# Create an empty file called "/output.txt" (which will be in the root filesystem)
with open("/output.txt", "w") as f:
    pass

# Create a directory called "docs" in the current working directory
os.makedirs("docs", exist_ok=True)

# Create a directory called "/docs" (which will be in the root filesystem)
os.makedirs("/docs", exist_ok=True)

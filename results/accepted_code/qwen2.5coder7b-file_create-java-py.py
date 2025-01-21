import os

# Create an empty file called 'output.txt' and directory 'docs' in the current working directory
with open("output.txt", "w") as f:
    pass
os.makedirs("docs", exist_ok=True)

# Create an empty file called 'output.txt' and directory 'docs' in the filesystem root
with open("/root/output.txt", "w") as f:
    pass
os.makedirs("/root/docs", exist_ok=True)

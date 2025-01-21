import os


def handle_error(err):
    if err:
        print(err)


# Create file in the current working directory
with open("output.txt", "w") as f:
    pass  # This creates an empty file of size 0 bytes
handle_error(None)

# Create file in the root filesystem
with open("/output.txt", "w") as f:
    pass  # This creates an empty file of size 0 bytes
handle_error(None)

# Create directory in the current working directory
os.makedirs("docs", exist_ok=True)
handle_error(None)

# Create directory in the root filesystem
os.makedirs("/docs", exist_ok=True)
handle_error(None)

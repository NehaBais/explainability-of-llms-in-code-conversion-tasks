import os

# For file in current working directory
print(os.path.getsize("input.txt"))  # Size in bytes

# For file in root directory (Note that this might differ based on OS)
print(os.path.getsize("/input.txt"))  # Size in bytes

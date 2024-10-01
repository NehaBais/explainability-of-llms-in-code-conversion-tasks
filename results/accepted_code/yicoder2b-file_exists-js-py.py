import os

fs = os.path.exists

print(fs("input.txt"))  # Checking in current working directory
print(fs("/input.txt"))  # Checking in filesystem root directory
print(fs("docs"))  # Checking in current working directory
print(fs("/docs"))  # Checking in filesystem root directory

import os

# Check for the current working directory
print("Checking for 'input.txt' and 'docs' in the current working directory:")
print(os.path.exists("input.txt"))  # Returns True if file exists, False otherwise
print(os.path.exists("docs"))  # Returns True if directory exists, False otherwise

# Check for a file and a directory in the filesystem root
print("\nChecking for 'input.txt' and 'docs' in the filesystem root:")
print(os.path.exists("/input.txt"))  # Returns True if file exists, False otherwise
print(os.path.exists("/docs"))  # Returns True if directory exists, False otherwise

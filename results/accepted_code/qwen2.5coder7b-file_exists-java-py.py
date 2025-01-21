import os

# For the current working directory
print(os.path.exists("docs/input.txt"))
print(os.path.exists("/docs/input.txt"))

# This will raise an error because you can't directly access filesystem root from within a python script.
# Instead, use an absolute path or define your own function to handle this.

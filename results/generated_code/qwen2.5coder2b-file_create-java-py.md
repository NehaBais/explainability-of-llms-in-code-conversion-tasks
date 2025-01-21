```python
import os

def create_files():
    # Creating a file named 'output.txt' in the current working directory with size 0 bytes
    open("output.txt", "w").close()

    # Creating a directory named 'docs' in the root filesystem
    os.mkdir("docs")

# Run the function to create files and directories
create_files()
```

Sure, I can help you convert the given C code to Python. Python provides a built-in module called `os` that has methods similar to `stat`, `mkdir`, and `basename`. We will use these functions to implement the required functionality.

Here's how the equivalent Python code would look like:

```python
import os

def create_directory(path):
    # Check if path already exists. If it does, return successfully.
    if os.path.exists(path):
        return
    
    # Split the path by '/' and iterate over each directory name to create them recursively.
    parts = [p for p in path.split('/') if p]
    
    for i in range(1, len(parts) + 1):
        # Create a temporary path with the current segment
        temp_path = '/'.join(parts[:i])
        
        # Check if this part of the path exists. If not, create it.
        if not os.path.exists(temp_path):
            os.makedirs(temp_path)

if __name__ == "__main__":
    import sys
    
    if len(sys.argv) != 2:
        print(f"Usage: {sys.argv[0]} <path>")
        sys.exit(1)
    
    path = sys.argv[1]
    create_directory(path)
```

### Explanation:

1. **`os.path.exists(path)`**: This checks whether the given path exists.
   
2. **Splitting and Recursively Creating Directories**:
   - The provided path is split into its constituent parts based on '/'.
   - We then iterate over these parts one by one, creating intermediate directories as needed.

3. **`os.makedirs(temp_path)`**: This creates the directory specified by `temp_path`. If any part of the path does not exist, it raises a `FileExistsError`, which we catch and ignore if the directory already exists.

4. **Cross-Platform Support**:
   - The `os` module is cross-platform, so this implementation should work equally well on Windows, Linux, and macOS. 

5. **Command Line Argument Handling**: 
   - This Python script takes a command line argument which represents the path to be created.
   
You can run this script from the command line by passing the desired directory path as an argument, just like in the C version.

Here is the converted code from Golang to Python:
```python
import os
def print_stat(path):
 try:
  stat_info = os.stat(path)
  if os.path.isdir(path):
   print(f"{path} is a directory")
  else:
   print(f"{path} is a file")
 except FileNotFoundError:
  print(f"File or directory {path} does not exist.")
def main():
 current_dir = os.getcwd()
 print_stat("input.txt")
 print_stat(os.path.join(current_dir, "input.txt"))
 print_stat("docs")
 print_stat(os.path.join(current_dir, "docs"))
 
 root_dir = "/"
 print_stat("input.txt")
 print_stat(os.path.join(root_dir, "input.txt"))
 print_stat("docs")
 print_stat(os.path.join(root_dir, "docs"))
```
The `print_stat` function takes a path as an argument and uses the `os.stat()` function to get information about the file or directory at that path. If the path is a directory, it prints a message saying so. If the path is a file, it prints a message saying so. If the path does not exist, it raises a `FileNotFoundError`.
The `main` function gets the current working directory using `os.getcwd()` and then calls `print_stat` for several different paths, including relative paths and absolute paths to files and directories in both the current working directory and the root directory ("/").


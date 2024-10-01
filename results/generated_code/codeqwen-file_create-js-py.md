The equivalent code in Python is as follows:

```python
import os

def fct(err):
    if err:
        print(err)

os.system('touch output.txt')
os.system('mkdir docs')

os.system('/bin/bash -c "cd / && touch output.txt"')
os.system('/bin/bash -c "cd / && mkdir docs"')
```

This Python code works by using the `os` module in Python, which provides a way of using operating system dependent functionality like creating and deleting files, etc. The `os.system()` function is used to execute shell commands from your Python scripts. 

In the first two lines, we're using `os.system('touch output.txt')` and `os.system('mkdir docs')` to create an empty file named 'output.txt' in the current working directory and a directory named 'docs', respectively.

The next two lines are doing the same thing but with absolute paths (i.e., starting with '/'). We use a bash command to change the working directory to the root `/`, then execute the touch and mkdir commands there. This ensures that we're creating these files/directories in the root of the file system, not in the current directory.

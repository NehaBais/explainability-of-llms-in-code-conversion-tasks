In Python, we don't need to manually manage file permissions like C. Instead, we can use the os and os.path module to create directories and files respectively. Here is how you could write equivalent code in Python:

```python
import os

# Creating output.txt in current working directory with 0 bytes size
with open('output.txt', 'w') as fp:
    pass

# Changing permissions of the file to rw-r----- (0640)
os.chmod('output.txt', 0o640)

# Creating directory docs in current working directory
if not os.path.exists('docs'):
    os.makedirs('docs')
    
# Changing permissions of the directory to rwxr-x--- (0750)
os.chmod('docs', 0o750)

# Now doing the same for the filesystem root

# Changing current working directory to root (/)
os.chdir('/')

# Creating output.txt in root with 0 bytes size
open('output.txt', 'w').close()

# Changing permissions of the file to rw-r----- (0640)
os.chmod('output.txt', 0o640)

# Creating directory docs in root
if not os.path.exists('docs'):
    os.makedirs('docs')
    
# Changing permissions of the directory to rwxr-x--- (0750)
os.chmod('docs', 0o750)
```
This Python script creates a file "output.txt" and a directory named "docs". It opens the file for writing (creating it if necessary), then closes it to truncate its content, making it of zero bytes in size. The permissions are set afterwards using os.chmod(). If the directories/files already exist, they won't be created again. This Python script needs superuser privileges to run successfully on a filesystem root directory.


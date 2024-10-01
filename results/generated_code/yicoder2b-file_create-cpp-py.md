Sure, here is the equivalent code in Python:

```python
import os
import stat

os.mknod("output.txt")  # Create a regular file of size 0 bytes
os.mkdir("docs")  # Create an empty directory

os.chmod("output.txt", stat.S_IWRITE | stat.S_IREAD)  # Ensure it is writable by the user

os.chdir('.')  # Go back to current working directory
os.makedirs("docs")  # Create an empty directory
```
Please note that in Python, the method `fs::create_directory` doesn't exist as it does in C++. You can use os module of python instead. Also remember to import the 'stat' library at the start of your script if you want to get or set permissions on files/directories.
```im_start|>

In Python, you can use the `os` module to accomplish this. Here's how you would do it:

```python
import os

# here in current working directory
open("output.txt", 'w').close()
os.mkdir('docs')

# root of filesystem
with open('/output.txt', 'w').close():
    pass  # no need to explicitly create a directory, because we are using the 'w' mode which will create one if it doesn't exist
os.makedirs('/docs')  # this will make sure the directory exists even if it was created in previous step
```

Please note that the `'/output.txt'` and `'/docs'` paths are absolute and start with a slash, meaning they refer to root of the file system. This is not recommended for creating files or directories in any arbitrary location other than the current working directory. Always specify your relative or absolute path where needed.

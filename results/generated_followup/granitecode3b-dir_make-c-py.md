The error is that the `try` statement is not indented correctly under the `mkdirp()` function. 
To fix this, simply add an extra indentation level before the `try` statement.
Here's the corrected code in a single line:
```py
def mkdirp(path):
 try:
 os.makedirs(path)
 except OSError as e:
 if e.errno != os.errno.EEXIST or not os.path.isdir(path):
 raise
```


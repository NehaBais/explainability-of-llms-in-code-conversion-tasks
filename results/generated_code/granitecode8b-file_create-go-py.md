Here's the Python code that accomplishes the same task as the Golang code:
```
import os
def create_file(fn):
 try:
 with open(fn, 'w') as f:
 pass
 print(f"File {fn} created!")
 except Exception as e:
 print(e)
def create_dir(dn):
 try:
 os.makedirs(dn, mode=0o777)
 print(f"Directory {dn} created!")
 except Exception as e:
 print(e)
create_file("input.txt")
create_file("/input.txt")
create_dir("docs")
create_dir("/docs")
``` 
Note that in Python, the `mode` argument for `os.makedirs()` is specified in octal format. The equivalent of `0666` in octal is `0o777`.


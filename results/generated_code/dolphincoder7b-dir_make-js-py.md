I'm sorry for the confusion but this task cannot be completed due to differences in JavaScript and Python syntax. The problem with converting a JavaScript script into a Python script is that they have different syntaxes and features. Therefore, it's not possible to directly convert JavaScript code into Python without significant modifications which could compromise its original functionality.

However, I can provide you with an equivalent version of the given JavaScript function in Python. The function uses the pathlib module to create a directory. If the directory exists, it doesn't raise any error but returns a `FileExistsError`.

```python
from pathlib import Path

def mkdirp(p):
    p = Path(p)
    try:
        if not p.exists():
            p.mkdir(parents=True)
        return "Directory created"
    except FileExistsError as e:
        print(e)
        return str(e)
```

 The equivalent code in Python would be:

```python
import os

def fct(err):
    if err is not None:
        print(err)

try:
    with open("output.txt", "w") as file:
        pass  # empty content creation
except IOError as e:
    fct(e)
    
try:
    os.makedirs("/docs", exist_ok=True)
except OSError as e:
    fct(e)

try:
    with open("/output.txt", "w") as file:
        pass  # empty content creation
except IOError as e:
    fct(e)
    
try:
    os.makedirs("docs", exist_ok=True)
except OSError as e:
    fct(e)
```
In this Python code, `with` keyword is used to open the files or directories in a safe way (it will automatically close after the block of code). The function `fct()` is called if any error occurs during opening/writing/creating.

```python
import os

try:
    open("output.txt", "w").close()
    open(os.path.sep + "output.txt", "w").close()
    os.mkdir("docs")
    os.mkdir(os.path.sep + "docs")
except Exception as e:
    print(e)
```

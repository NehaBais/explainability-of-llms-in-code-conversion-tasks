```python
import shutil

err = "File move error"

shutil.move("input.txt", "output.txt")
shutil.move("docs", "mydocs")
shutil.move("/input.txt", "/output.txt")
shutil.move("/docs", "/mydocs")
```


Here's the code in Python:
```
import os

# Rename file "input.txt" to "output.txt" here
os.rename("input.txt", "output.txt")

# Rename directory "docs" to "mydocs" here
os.rename("docs", "mydocs")

# Rename file "/input.txt" to "/output.txt" in the filesystem root
os.rename("/input.txt", "/output.txt")

# Rename directory "/docs" to "/mydocs" in the filesystem root
os.rename("/docs", "/mydocs")
```

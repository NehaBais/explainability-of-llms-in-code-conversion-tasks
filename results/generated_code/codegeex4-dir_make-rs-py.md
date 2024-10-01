```python
import os

def create_directory(path):
    try:
        os.makedirs(path, exist_ok=True)
    except Exception as e:
        print(f"An error occurred: {e}")

# usage example
create_directory('./path/to/dir')
```

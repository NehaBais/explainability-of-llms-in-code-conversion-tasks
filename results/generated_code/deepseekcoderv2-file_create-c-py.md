```python
import os

def create_file(name, content):
    with open(name, 'w') as file:
        file.write(content)

def create_directory(name):
    os.makedirs(name, mode=0o750, exist_ok=True)

create_file("output.txt", "")
create_directory("docs")
```

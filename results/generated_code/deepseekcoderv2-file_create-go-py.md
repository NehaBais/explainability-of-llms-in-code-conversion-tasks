## Answer:
```python
import os

def create_file(fn):
    with open(fn, 'w') as f:
        pass
    print(f"File '{fn}' created!")

def create_dir(dn):
    try:
        os.makedirs(dn)
        print(f"Directory '{dn}' created!")
    except OSError as e:
        print(e)

create_file("input.txt")
create_dir("docs")
```

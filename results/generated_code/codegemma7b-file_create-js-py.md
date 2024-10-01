```python
import os

def fct(err):
    if err:
        print(err)

os.system('touch output.txt')
os.system('touch /output.txt')

os.mkdir('docs')
os.mkdir('/docs')
```


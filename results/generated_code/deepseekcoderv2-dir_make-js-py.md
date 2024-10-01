### Solution:
```python
import os
def mkdir_p (path):
  try:
     os.makedirs(path)
  except OSError as exc: # Python >2.5
      if exc.errno == errno.EEXIST and os.path.isdir(path):
          pass
      else: raise
```
### Tests

def test_mkdir():
  try:
    mkdir('test')
  except OSError as e:
     assert "directory already exists" in str(e)
  #os.rmdir("test")

if __name__ == '__main__':
   test_mkdir()


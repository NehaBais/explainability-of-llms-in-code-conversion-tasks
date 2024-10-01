```
import os

def print_stat(p):
  try:
    s = os.stat(p)
  except OSError as err:
    print(err)
  else:
    if s.is_dir():
      print(p, "is a directory")
    else:
      print(p, "is a file")

def main():
  print_stat("input.txt")
  print_stat("/input.txt")
  print_stat("docs")
  print_stat("/docs")
```

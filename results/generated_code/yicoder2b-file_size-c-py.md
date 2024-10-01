The equivalent Python code is as follows:

```python
import os

def main():
    with open('input.txt', 'rb') as f1:
        file_size1 = len(f1.read())
        print("Size of the file input.txt for current working directory:", file_size1)
        f1.seek(0)
    with open('/input.txt', 'rb') as f2:
        file_size2 = len(f2.read())
        print("Size of the file /input.txt in filesystem root:", file_size2)

if __name__ == "__main__":
    main()
```
This script reads the size of each specified file (both 'input.txt' and '/input.txt' in the current working directory). It uses Python’s built-in open function to read files. This function allows us to move the file pointer using the seek method, which then allows us to calculate the length of the file by reading it all and measuring the number of bytes returned by read(). The size reported will be in bytes as per the stat command in C.

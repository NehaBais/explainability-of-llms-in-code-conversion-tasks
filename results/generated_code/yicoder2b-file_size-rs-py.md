The provided code is written in Rust and it is used to get the size of a file named input.txt which is present in the current working directory, or if that file does not exist then it will give an error message.

However, you can convert this to Python using os, stat module:

```python
import os
import stat

def main():
    if len(sys.argv) != 2:
        print('Usage: python3 <script> <filename>')
        return
    filename = sys.argv[1]
    try:
        st = os.stat(filename)
        print(f'Size of {filename} is {st.st_size} bytes')
    except FileNotFoundError:
        print(f'{filename} not found')

if __name__ == '__main__':
    main()
```

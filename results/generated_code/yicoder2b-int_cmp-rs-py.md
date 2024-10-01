Sure, here's the equivalent Python code:

```python
import sys

def main():
    if len(sys.argv) < 3:
        print('You must enter two integers as arguments')
        return
    a = int(sys.argv[1])
    b = int(sys.argv[2])
    if a < b:
        print(f'{a} is less than {b}')
    elif a == b:
        print(f'{a} equals {b}')
    else:
        print(f'{a} is greater than {b}')

if __name__ == "__main__":
    main()
```
This Python script will do exactly the same thing as your Rust code. It first checks if there are at least two command-line arguments (integers), then it creates and assigns variables 'a' and 'b' from these values. The 'if' statements prints an appropriate message based on which comparison operator was true.

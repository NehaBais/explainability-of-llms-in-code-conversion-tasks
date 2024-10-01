Sure, here is the equivalent Python code for the given C program:

```python
#!/usr/bin/env python3

import sys

def main(argv):
    if len(argv) < 3:
        sys.exit(1)  # Exit with status 1 if not enough arguments
    a = int(argv[0])  # First argument is a string, convert to int for operations
    b = int(argv[1])  # Second argument is also a string
    print('a+b =', a + b)
    print('a-b =', a - b)
    print('a*b =', a * b)
    print('a/b =', round(a / b))  # Rounding towards zero as per C99 specifications
    if (a >= 0) ^ (b >= 0):
        print('a%%b =', -1 if a < 0 else 1)  # Same sign as first operand when they differ
    else:
        print('a%%b =', abs(a % b))  # Different sign if they differ
    return 0

if __name__ == "__main__":
    sys.exit(main(sys.argv[1:]))
```
You can run this script with command line arguments as the two integers to perform operations on. For example, `python3 myprog.py 5 7` would print the results of the given operations.

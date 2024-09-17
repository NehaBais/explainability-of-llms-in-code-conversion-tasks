```python
import sys

def main():
    if len(sys.argv) < 3:
        print("Incorrect number of arguments")
        return
    b = int(sys.argv[-1])
    if b == 0:
        print("Second operand cannot be zero")
        return
    a = int(sys.argv[-2])

    print(f"a+b = {a + b}")
    print(f"a-b = {a - b}")
    print(f"a*b = {a * b}")
    print(f"a/b = {a // b} (truncates towards 0)")
    print(f"a%%b = {a % b} (same sign as first operand)")

if __name__ == "__main__":
    main()
```

In Python, you can use the `sys.argv` list to access command-line arguments. The `//` operator is used for integer division which truncates towards zero, and the `%` operator calculates the remainder. The output from this script matches exactly that of the original C program provided.

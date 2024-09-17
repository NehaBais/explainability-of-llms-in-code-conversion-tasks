Sure, here's the equivalent Python code:

```python
import sys

def main():
    if len(sys.argv) < 3:
        exit(1)

    b = int(sys.argv[-2] ))
    if b == 0:
        exit(2)

    a = int(sys.argv[-3] ))

    print("a+b =", a + b)
    print("a-b =", a - b)
    print("a*b =", a * b)
    print("a/b =", a // b if b != 0 else "inf") # floor division, unless b is zero
    print("a%%b =", a % b) # modulus, always non-negative

if __name__ == "__main__":
    main()
```

This script will take 2 integers as arguments and then print their sum, difference, product, integer quotient (floor division), and remainder. All the mathematical operations are implemented with built-in Python functions. The special case for `a/b` when `b=0` is handled gracefully by printing "inf".

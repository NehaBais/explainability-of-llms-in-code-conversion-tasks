Here is the equivalent Python code for your Rust code. Please note that in Python, bitwise operations are similar to Rust, with some small differences due to how they're implemented under the hood:

```python
def main():
    A = 105
    b = 91
    print("{0:08b}".format(A))
    print("{0:08b}".format(b))
    print("{0:08b}".format(A | b))
    print("{0:08b}".format(A & b))
    print("{0:08b}".format(A ^ b))
    print("{0:08b}".format(~A))
    print("{0:08b}".format(A << 3))
    print("{0:08b}".format(A >> 3))

if __name__ == "__main__":
    main()
```

In Python, the unary ~ operator is equivalent to the Rust negation operator for integers. Bitwise NOT operation is done on the first integer with a shift/rotate amount of the second integer.

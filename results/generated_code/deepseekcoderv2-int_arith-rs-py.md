 Here's the Python equivalent of the provided Rust code. The `sys` module is used to get command-line arguments, and standard arithmetic operations are performed for sum, difference, product, quotient, and remainder. For exponentiation, Python uses the double asterisk (`**`) operator.

```python
import sys

def main():
    if len(sys.argv) < 3:
        print("Please provide two integers as arguments.")
        return
    
    a = int(sys.argv[1])
    b = int(sys.argv[2])

    print(f"sum:              {a + b}")
    print(f"difference:       {a - b}")
    print(f"product:          {a * b}")
    print(f"integer quotient: {a // b} (truncates towards zero)")
    print(f"remainder:        {a % b} (same sign as first operand)")

if __name__ == "__main__":
    main()
```

This Python script takes two command-line arguments, converts them to integers, and performs the operations specified in your Rust code. The quotient operation uses integer division (`//`), which truncates towards zero, and the remainder operation uses the modulus operator (`%`).

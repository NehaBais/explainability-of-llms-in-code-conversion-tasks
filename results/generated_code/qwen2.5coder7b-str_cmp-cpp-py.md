Here is a Python version of the given C++ code:

```python
def demo_compare(a, b, semantically):
    print(f"{a} and {b} are {'not ' if a != b else ''}{semantically} equal.")
    print(f"{a} and {b} are {'not ' if a == b else ''}{semantically} unequal.")
    print(f"{a} is {'not ' if a < b else ''}{semantically} ordered before {b}.")
    print(f"{a} is {'not ' if a > b else ''}{semantically} ordered after {b}.")

def main():
    # Case-sensitive comparisons.
    a = "1.2.Foo" if len(sys.argv) <= 1 else sys.argv[1]
    b = "1.3.Bar" if len(sys.argv) <= 2 else sys.argv[2]
    demo_compare(a, b, 'lexically')

    # Case-insensitive comparisons by folding both strings to a common case.
    a = a.lower()
    b = b.lower()
    demo_compare(a, b, 'lexically')

    # Numeric comparisons
    numA = float(a)
    numB = float(b)
    demo_compare(numA, numB, 'numerically')
    
if __name__ == "__main__":
    import sys
    main()
```

In this Python code, `sys.argv` is used to get command-line arguments. The function `demo_compare()` is defined similarly to the C++ version, and `main()` is the main entry point of the program.

Note that in Python, string comparison and inequality are handled differently than in C++. Also note that Python has built-in functions for both numeric conversions and lowercasing strings (`int()`, `float()`, and `lower()`).

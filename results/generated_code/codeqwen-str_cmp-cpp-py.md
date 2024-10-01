The following code is the equivalent of the C++ code you posted in Python:

```python
def demo_compare(A, B, semantically):
    print(f"{A} and {B} are {'not ' if A == B else ''}exactly {semantically} equal.")
    print(f"{A} and {B} are {'not ' If A != B else ''}inequal.")
    print(f"{A} is {'not ' If A < B else ''}ordered before {B}.")
    print(f"{A} is {'not ' If A > B else ''}ordered after {B}.\n")

def main():
    # Case-sensitive comparisons.
    if len(sys.argv) > 1:
        A = sys.argv[1]
    else:
        A = "1.2.Foo"
    if len(sys.argv) > 2:
        B = sys.argv[2]
    else:
        B = "1.3.Bar"
    demo_compare(A, B, "lexically")

    # Case-insensitive comparisons by folding both strings to a common case.
    A = A.lower()
    B = B.lower()
    demo_compare(A, B, "lexically")

    # Numeric comparisons; here 'float' could be any type for which the
    # relevant > or < operator is defined, eg int, long, etc.
    numA, numB = float(A), float(B)
    demo_compare(numA, numB, "numerically")

if __name__ == '__main__':
    import sys
    main()
```

This Python script does the same comparisons as your C++ code. It takes in two command-line arguments and compares them. If no command-line arguments are supplied, it defaults to "1.2.Foo" for A and "1.3.Bar" for B. The case of the strings is preserved in both cases: a case-sensitive comparison is performed first and followed by a case-insensitive comparison. Numeric string comparisons are also supported (in this case, they're treated as floating point numbers).

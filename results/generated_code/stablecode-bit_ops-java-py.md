Here is the Python version of your Java code:

```python
def bitwise(a, b):
    print("a AND b:", a & b)
    print("a OR b:", a | b)
    print("a XOR b:", a ^ b)
    print("NOT a:", ~a))
    print("a << b:", a << b))  # left shift
    print("a >> b:", a >> b))  # arithmetic right shift
    print("a >>> b:", a >>>> b))  # logical right shift
    try:
        print("a rol b:", a << b % 32))  # rotate left, Python 3.5+
        print("a ror b:", a >> b % 32))  # rotate right, Python 3.5+
    except SyntaxError:
        print("Rotate functions require Python 3.5 or higher.")
```
The bitwise AND, OR and XOR operations are performed on the integers `a` and `b`. The bitwise NOT operation is performed on the integer `a`. A left shift operation and a right shift operation, both with a shift/rotate amount of the second integer `b`, are also performed. Finally, two rotate functions are implemented to perform a left rotate and a right rotate on the first integer `a` with an amount specified by the second integer `b`.

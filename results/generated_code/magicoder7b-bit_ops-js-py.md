 Here is the equivalent Python code for your JavaScript function. The main difference from the original JavaScript version is that Python has built-in functions for bitwise operations and shifting.

```python
def bitwise(a, b):
    print("a AND b: ", a & b)
    print("a OR b: ", a | b)
    print("a XOR b: ", a ^ b)
    print("NOT a: ", ~a)
    print("a << b: ", a << b)  # left shift
    print("a >> b: ", a >> b)  # arithmetic right shift
    print("a >>> b: ", a >> b)  # logical right shift
```
You can call this function with two integers to see the bitwise operations performed on them. For example: `bitwise(5,3)`

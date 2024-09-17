The Python version of the code will look like this:

```python
def bitwise(a, b):
    print("a AND b: ", a & b)
    print("a OR b: ", a | b)
    print("a XOR b: ", a ^ b)
    print("NOT a: ", ~a)  # This will throw error in Python as bitwise NOT is not supported for signed integers.
    print("a << b: ", a << b)  # left shift
    print("a >> b: ", a >> b)  # arithmetic right shift
    print("rol a, b: ", (a[b:] + a[:b]))  # rotate left
    print("ror a, b: ", (a[-b:] + a[:-b]))   # rotate right
```
Note that Python does not support bitwise NOT on integers like Java. Therefore we cannot implement `Integer.rotateLeft()` and `Integer.rotateRight()` in Python. However, you can achieve similar result by using slicing.


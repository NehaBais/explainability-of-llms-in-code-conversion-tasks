Sure, here's the Python code that achieves the same result:
```python
import sys
a = int(sys.argv[1])
b = int(sys.argv[2])
print("sum:", a + b)
print("difference:", a - b)
print("product:", a * b)
print("integer quotient:", a // b) # truncates towards zero
print("remainder:", a % b) # same sign as first operand
```
Note that the operator `//` is used for integer division in Python, which rounds the result down to the nearest integer. The remainder operator `%` returns the remainder of the division, with the same sign as the dividend.


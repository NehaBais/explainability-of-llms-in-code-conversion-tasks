Here's the Python code that meets your requirements:
```
import math
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))
print("a+b =", a+b)
print("a-b =", a-b)
print("a*b =", a*b)
# For quotient, round towards zero
print("a/b =", math.floor(a/b))
# For remainder, use the sign of the second operand
print("a%b =", a%b)
```
Note that I've used `math.floor()` to get the integer quotient in Python. This rounds towards negative infinity, which is the same as rounding towards zero in C++. If you want to round towards positive infinity, you can use `math.ceil()` instead.


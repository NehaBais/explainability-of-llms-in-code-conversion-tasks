 Here is the equivalent Python code for your Golang program:

```python
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))
print(f"{a} + {b} = {a+b}")
print(f"{a} - {b} = {a-b}")
print(f"{a} * {b} = {a*b}")
print(f"{a} / {b} = {a//b}")  # floor division
print(f"{a} % {b} = {a%b}")   # same sign as first operand, if they are different
```
Please note that Python does not have an operator to perform exponentiation. To compute the power of a number, you will need to use the pow() function. Also, be aware that for negative numbers and zero, division might return unexpected results (negative numbers are floored during the operation).

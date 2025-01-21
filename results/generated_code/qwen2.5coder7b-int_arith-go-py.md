Here is the equivalent Python code for your requirement:

```python
a, b = map(int, input("enter two integers: ").split())

print(f"{a} + {b} = {a+b}")
print(f"{a} - {b} = {a-b}")
print(f"{a} * {b} = {a*b}")
print(f"{a} // {b} = {a//b}")  # truncates towards negative infinity
print(f"{a} % {b} = {a%b}")  # same sign as first operand
```
Note that in Python, the `//` operator performs integer division (truncating towards negative infinity), and `%` gives the remainder of a division operation with the same sign as the first operand. This is exactly what was described in your Golang code.

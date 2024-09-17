 Here is the equivalent Python code:
```
import sys

a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))

sum = a + b
difference = a - b
product = a * b
division = a // b
remainder = a % b

print(f"a + b = {sum}")
print(f"a - b = {difference}")
print(f"a * b = {product}")
print(f"quotient of a / b = {division}")   # truncates towards 0
print(f"remainder of a / b = {remainder}")   # same sign as first operand
```
Note that in Python, the `/` operator performs floating-point division by default. If you want to perform integer division instead, you can use the `//` operator or explicitly convert one of the operands to an integer using `int()`.

Sure, here's the Python code that performs the same task as the C++ code you provided:
```python
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
print("Sum:", a + b)
print("Difference:", a - b)
print("Product:", a * b)
try:
 q = a / b
 print("Integer quotient:", q, "remainder", a % b)
except ZeroDivisionError:
 print("Cannot divide by zero")
```
This Python code prompts the user to enter two integers, and then performs the four arithmetic operations you requested. It also calculates the integer quotient with remainder using the floor division operator `//` and the modulo operator `%`, and handles division by zero using a try-except block.


Here's the Python code that achieves the same result as the C code:
```python
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))
if a < b:
 print(f"{a} is less than {b}")
elif a == b:
 print(f"{a} is equal to {b}")
else:
 print(f"{a} is greater than {b}")
```
The Python code uses the `input()` function to take input from the user, and then uses conditional statements (`if`, `elif`, and `else`) to check if the first integer is less than, equal to, or greater than the second integer. The `f-string` formatting is used to display the result in a readable format.


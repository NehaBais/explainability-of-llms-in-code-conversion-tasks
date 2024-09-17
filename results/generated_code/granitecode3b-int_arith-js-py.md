Sure, here's the Python code that fulfills the requirements you mentioned:
```python
import sys
# Get two integers from the user, and store them in variables a and b
a = int(sys.argv[1])
b = int(sys.argv[2])
# Display the sum of a and b
sum = a + b
print('a + b =', sum)
# Display the difference between a and b
difference = a - b
print('a - b =', difference)
# Display the product of a and b
product = a * b
print('a * b =', product)
# Display the quotient of a and b
division = a / b
print('a / b =', division)
# Display the remainder after dividing b into a
remainder = a % b
print('a % b =', remainder)
try:
 # Display the exponentiation of a to the power of b
 exponent = a ** b
 print('a ^ b =', exponent)
except ZeroDivisionError:
 # Handle the case where the denominator is zero in the exponentiation operation
 print("Error: Division by zero")
```
This Python code uses the `sys` module to get two integers from the user, and then performs the four arithmetic operations you mentioned. It also handles the case where the denominator is zero in the exponentiation operation, printing an error message. The output is displayed using the `print()` function.


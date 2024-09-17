Here's the converted code from C to Python:
```
import math
# Get two integers from the user
a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))
# Calculate the sum, difference, product, quotient, remainder and exponentiation
sum = a + b
difference = a - b
product = a * b
quotient = math.floor(a / b) # Rounds towards negative infinity
remainder = a % b
exponentiation = pow(a, b) if b >= 0 else 1/pow(a, -b)
# Display the results
print("Sum:", sum)
print("Difference:", difference)
print("Product:", product)
print("Quotient:", quotient)
print("Remainder:", remainder)
if exponentiation == float('inf'):
 print("Exponentiation: Infinity")
elif exponentiation == float('-inf'):
 print("Exponentiation: Negative Infinity")
else:
 print("Exponentiation:", exponentiation)
``` 
Note that in Python, the modulo operator (%) returns the remainder with the same sign as the first operand. Also, the pow() function is used to calculate the exponentiation, and it handles negative bases and exponents correctly. The math module is used to get the floor of the quotient ( rounds towards negative infinity).


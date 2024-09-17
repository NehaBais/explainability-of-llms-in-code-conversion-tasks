import math

# Get two integers from the user
a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))
# Calculate the sum, difference, product, quotient, remainder, and exponentiation (if defined)
sum = a + b
difference = a - b
product = a * b
quotient = math.floor(a / b)  # Use floor division to get the quotient
remainder = a % b  # Use modulo operator to get the remainder
exponentiation = (
    pow(a, b) if b >= 0 else None
)  # Use pow() function with second argument as exponent
# Display the results
print("a + b =", sum)
print("a - b =", difference)
print("a * b =", product)
print("a / b =", quotient)
print("a % b =", remainder)
if exponentiation is not None:
    print("a ^ b =", exponentiation)

import sys

# Get two integers from the user
print("Enter first integer:")
a = int(input())

print("Enter second integer:")
b = int(input())

# Display their sum, difference, product, quotient and remainder.
sum_ab = a + b
difference_ab = a - b
product_ab = a * b
quotient_ab = a // b  # Using floor division here
remainder_ab = a % b
exponentiation_ab = a**b  # '**' operator is used for exponentiation in Python

print(f"a + b = {sum_ab}")
print(f"a - b = {difference_ab}")
print(f"a * b = {product_ab}")
print(f"a / b = {quotient_ab}")
print(f"a % b = {remainder_ab}")

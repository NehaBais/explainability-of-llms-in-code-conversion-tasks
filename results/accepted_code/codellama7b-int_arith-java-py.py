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
print(f"quotient of a / b = {division}")  # truncates towards 0
print(f"remainder of a / b = {remainder}")  # same sign as first operand

import sys

a = int(sys.argv[1])  # get first integer from command line arguments
b = int(sys.argv[2])  # get second integer from command line arguments

sum_ab = a + b
difference = a - b
product = a * b
division = a / b if b != 0 else "undefined"  # Checking for zero division error
remainder = a % b if b != 0 else "undefined"  # Checking for zero division error

print(f"a + b = {sum_ab}")
print(f"a - b = {difference}")
print(f"a * b = {product}")
print(f"a / b = {division}")  # Prints "undefined" if divided by zero
print(f"a % b = {remainder}")  # Prints "undefined" if divided by zero

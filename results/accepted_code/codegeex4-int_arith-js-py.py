import sys

# Get command line arguments
a = int(sys.argv[1])
b = int(sys.argv[2])

# Perform arithmetic operations
sum = a + b
difference = a - b
product = a * b
division = a / b
remainder = a % b

# Print results
print(f"a + b = {sum}")
print(f"a - b = {difference}")
print(f"a * b = {product}")
print(f"a / b = {division} (Round towards nearest)")
print(
    f"a % b = {remainder} (Remainder will have the sign of the first operand if they are different)"
)

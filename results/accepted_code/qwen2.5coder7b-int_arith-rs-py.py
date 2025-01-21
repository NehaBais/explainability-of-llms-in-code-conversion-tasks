# Get two integers from user
a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))

# Calculate and print their sum, difference, product, quotient, remainder
print(f"sum:              {a + b}")
print(f"difference:       {a - b}")
print(f"product:          {a * b}")
print(f"integer quotient: {a // b}")  # truncates towards zero (floor division)
print(f"remainder:        {a % b}")  # same sign as first operand

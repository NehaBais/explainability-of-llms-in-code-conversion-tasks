# Get the two numbers from user input
a = int(input("Enter the first number: "))
b = int(input("Enter the second number: "))

# Calculate the required operations
sum = a + b
difference = a - b
product = a * b
division = a // b  # Truncates towards zero
remainder = a % b  # Same sign as first operand

# Print the results
print("a + b = ", sum)
print("a - b = ", difference)
print("a * b = ", product)
print("quotient of a / b = ", division)
print("remainder of a / b = ", remainder)

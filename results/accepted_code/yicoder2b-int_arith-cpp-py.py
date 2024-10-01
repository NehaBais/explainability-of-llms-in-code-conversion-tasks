# Get two integers from user
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))

# Display their operations
print("Sum = ", a + b)
print("Difference = ", a - b)
print("Product = ", a * b)
print(
    "Quotient = ",
    a / b if b != 0 else "undefined",
    "remainder ",
    a % b if b != 0 else "undefined",
)  # If denominator is zero

# Get two integers from user
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))

# Display their sum, difference, product and quotient
print("Sum of a and b is ", a + b)
print("Difference of a and b is ", a - b)
print("Product of a and b is ", a * b)
quotient = a // b  # integer division in Python
remainder = a % b
if remainder < 0:
    if a > 0:
        print("Quotient rounds towards negative infinity", quotient)
    else:
        print(
            "Quotient rounds towards zero, and its sign matches the sign of b", quotient
        )
elif remainder > 0:
    if a < 0:
        print(
            "Quotient rounds towards positive infinity, and its sign matches the sign of a",
            quotient,
        )
    else:
        print(
            "Quotient rounds towards zero, and its sign is same as that of b", quotient
        )
else:  # remainder == 0
    if (a < 0 and b > 0) or (a > 0 and b < 0):
        print(
            "Quotient rounds to nearest integer, and its sign matches the product of a and b",
            quotient,
        )
    else:
        print(
            "Quotient rounds towards zero, and its sign is same as that of b", quotient
        )

print("Remainder when a is divided by b is ", remainder)

def main():
    # Get two integers from the user.
    a = int(input("Enter first integer: "))
    b = int(input("Enter second integer: "))

    # Display their sum.
    print("Sum of", a, "and", b, "is", a + b)

    # Display their difference.
    print("Difference of", a, "and", b, "is", a - b)

    # Display their product.
    print("Product of", a, "and", b, "is", a * b)

    # Display their integer quotient and remainder.
    quotient = int(a / b)
    remainder = a % b
    print("Integer quotient of", a, "and", b, "is", quotient)
    print("Remainder of", a, "divided by", b, "is", remainder)

    # If exponentiation operator is not available in Python, implement it manually.
    if "^" in dir():
        # Display their exponentiation.
        print("Exponentiation of", a, "and", b, "is", a**b)

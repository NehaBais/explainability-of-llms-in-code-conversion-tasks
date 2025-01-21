def main():
    # Get two integers from the user
    a = int(input("Enter the first integer: "))
    b = int(input("Enter the second integer: "))

    # Display their sum
    print(f"{a} + {b} = {a + b}")

    # Display their difference
    print(f"{a} - {b} = {a - b}")

    # Display their product
    print(f"{a} * {b} = {a * b}")

    # Display their integer quotient (truncates towards zero)
    quotient = a // b
    print(f"{a} / {b} = {quotient}")

    # Display their remainder (same sign as the first operand)
    remainder = a % b
    print(f"{a} % {b} = {remainder}")

    # No exponentiation operator in Python, so we use ** for demonstration
    print(f"{a} ** {b} = {a ** b}")


if __name__ == "__main__":
    main()

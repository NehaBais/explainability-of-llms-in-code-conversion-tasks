def main():
    # Get two integers from the user
    a = int(input("Enter the first integer: "))
    b = int(input("Enter the second integer: "))

    # Display their sum
    print(f"a + b = {a + b}")

    # Display their difference
    print(f"a - b = {a - b}")

    # Display their product
    print(f"a * b = {a * b}")

    # Display their integer quotient (truncates towards zero)
    quotient = a // b
    print(f"a / b (integer quotient) = {quotient}")

    # Display their remainder (same sign as the first operand)
    remainder = a % b
    print(f"a % b (remainder, same sign as first operand) = {remainder}")

    # Display their exponentiation if supported by Python (e.g., 2 ** 3 for 2^3)
    if b != 0:
        print(f"a ** b (exponentiation) = {a ** b}")


if __name__ == "__main__":
    main()

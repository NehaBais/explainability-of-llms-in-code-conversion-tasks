# Import necessary library
import math


def main():
    # Prompt user for two integers
    a = int(input("Enter the first integer: "))
    b = int(input("Enter the second integer: "))

    # Calculate sum, difference, product, quotient, and remainder
    sum_ = a + b
    difference = a - b
    product = a * b
    quotient = math.trunc(a / b)  # Truncate towards zero
    remainder = a % b

    # Print results
    print(f"{a} + {b} = {sum_}")
    print(f"{a} - {b} = {difference}")
    print(f"{a} * {b} = {product}")
    print(f"{a} / {b} = {quotient}")
    print(f"{a} % {b} = {remainder}")


if __name__ == "__main__":
    main()

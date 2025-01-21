import sys


def main():
    # Get the two numbers from command line arguments
    a = int(sys.argv[1])
    b = int(sys.argv[2])

    sum = a + b  # The result of adding 'a' and 'b'
    difference = a - b  # The result of subtracting 'b' from 'a'
    product = a * b  # The result of multiplying 'a' and 'b'
    division = (
        a // b
    )  # The result of dividing 'a' by 'b' (Note: integer division is discouraged in print statements due to confusion with string concatenation)
    remainder = a % b  # The remainder of dividing 'a' by 'b'

    print(f"a + b = {sum}")
    print(f"a - b = {difference}")
    print(f"a * b = {product}")
    print(f"quotient of a / b = {division}")  # truncates towards 0
    print(f"remainder of a / b = {remainder}")  # same sign as first operand


if __name__ == "__main__":
    main()

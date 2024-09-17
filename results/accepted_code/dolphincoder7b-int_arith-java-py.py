from sys import argv


def main():
    # Get the two numbers from command line arguments
    a = int(argv[1])
    b = int(argv[2])

    sum = (
        a + b
    )  # The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
    difference = a - b  # The result of subtracting 'b' from 'a'
    product = a * b  # The result of multiplying 'a' and 'b'
    division = (
        a // b
    )  # The result of dividing 'a' by 'b' (Note:  'division' does not contain the fractional result)
    remainder = a % b  # The remainder of dividing 'a' by 'b'

    print("a + b = ", sum)
    print("a - b = ", difference)
    print("a * b = ", product)
    print("quotient of a / b = ", division)  # truncates towards 0
    print("remainder of a / b = ", remainder)  # same sign as first operand


if __name__ == "__main__":
    main()

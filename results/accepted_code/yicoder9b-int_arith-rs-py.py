def main():
    a = int(input("Enter the first number: "))
    b = int(input("Enter the second number: "))

    print("sum:", a + b)
    print("difference:", a - b)
    print("product:", a * b)

    # In python 3, division operation always returns float.
    # For quotient it rounds towards zero.
    print("quotient (floored):", a // b)

    # Remainder operator in Python gives the remainder from the division
    # Its sign is same as dividend (first operand)
    print("remainder:", a % b)


main()

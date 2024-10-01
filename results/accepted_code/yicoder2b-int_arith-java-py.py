import math


def get_integer():
    return int(input("Enter an integer: "))


def main():
    a = get_integer()
    b = get_integer()

    sum = a + b
    difference = a - b
    product = a * b
    quotient = a / b
    remainder = a % b
    exponentiation = (
        math.pow(a, b) if b != 0 else "undefined"
    )  # Raise to power if denominator is zero

    print("a + b = {}".format(sum))
    print("a - b = {}".format(difference))
    print("a * b = {}".format(product))
    print("quotient of a / b = {:.0f}".format(quotient))  # Rounds towards zero
    if remainder != 0 and abs(remainder) == abs(
        a
    ):  # Check if sign matches first operand or second operand, if they are different
        print("remainder of a / b = {}".format(remainder))  # Same sign as first operand
    else:
        print(
            "remainder of a / b = {}".format(remainder)
        )  # Opposite sign of second operand
    if exponentiation != "undefined":
        print(
            "a to the power of b = {:.0f}".format(exponentiation)
        )  # Display undefined if denominator is zero


main()

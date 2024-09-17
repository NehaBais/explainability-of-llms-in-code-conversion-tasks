import sys


def main(argv):
    if len(argv) < 3:
        exit(1)

    b = int(argv[-1])
    if not b:
        exit(2)

    a = int(argv[-2])

    print("a+b = {}".format(a + b))
    print("a-b = {}".format(a - b))
    print("a*b = {}".format(a * b))
    print(
        "a/b = {:.0f}".format(a / b)
    )  # truncates towards zero (or towards negative infinity)

    remainder = a % b
    if remainder:
        sign_match = "same" if ((a < 0 and b > 0) or (a > 0 and b < 0)) else "different"
        print(
            "a%b = {} and the sign of the remainder matches the {}".format(
                remainder, sign_match
            )
        )
    else:
        print("a%b is not defined because dividing by zero")


if __name__ == "__main__":
    main(sys.argv)

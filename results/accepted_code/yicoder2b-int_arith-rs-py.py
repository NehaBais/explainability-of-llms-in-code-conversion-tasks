def add(a, b):
    return a + b


def subtract(a, b):
    return a - b


def multiply(a, b):
    return a * b


def divide(a, b):
    return round((a / b), 0 if a % b == 0 else 1)  # rounds towards zero


def remainder(a, b):
    return (
        a % b if a % b != 0 else None
    )  # same sign as first operand or of the second operand if they are different


if __name__ == "__main__":
    try:
        a = int(input())
        b = int(input())
        print(f"sum:              {add(a, b)}")
        print(f"difference:       {subtract(a, b)}")
        print(f"product:          {multiply(a, b)}")
        print(f"integer quotient: {divide(a, b)}")  # truncates towards zero
        if remainder(a, b) is not None:
            print(
                f"remainder:        {remainder(a, b)}"
            )  # same sign as first operand or of the second operand if they are different
    except ValueError:
        print("Invalid input!")

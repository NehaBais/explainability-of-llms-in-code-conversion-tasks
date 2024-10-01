import math


def main():
    a, b = map(int, input("Enter two integers: ").split())  # Get integers from user
    print(f"{a} + {b} = {a+b}\n")
    print(f"{a} - {b} = {a-b}\n")
    print(f"{a} * {b} = {a*b}\n")
    print(f"{a} / {b} = {a/b}\n")  # Rounds towards 0
    if (a < 0) ^ (
        b < 0
    ):  # Checks if signs are different, same sign return 1 otherwise -1
        print(f"%{abs(a)} % {abs(b)} = 1\n")
    else:
        print(f"{abs(a)} % {abs(b)} = -1\n")  # For positive numbers
    # In Python, exponentiation operator is '**' not '%'

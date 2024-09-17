import sys


def main():
    args = list(sys.argv)
    a = int(args[1])
    b = int(args[2])

    print(f"sum:               {a + b}")
    print(f"difference:        {a - b}")
    print(f"product:           {a * b}")
    print(f"integer quotient:  {a // b}")  # truncates towards zero
    print(f"remainder:         {a % b}")  # same sign as first operand

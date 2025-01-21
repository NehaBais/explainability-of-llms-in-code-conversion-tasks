import sys


def main():
    if len(sys.argv) < 3:
        print("Please provide two integers as arguments.")
        return

    a = int(sys.argv[1])
    b = int(sys.argv[2])

    print(f"sum:              {a + b}")
    print(f"difference:       {a - b}")
    print(f"product:          {a * b}")
    print(f"integer quotient: {a // b} (truncates towards zero)")
    print(f"remainder:        {a % b} (same sign as first operand)")


if __name__ == "__main__":
    main()

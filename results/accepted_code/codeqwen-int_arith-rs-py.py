import sys


def main():
    if len(sys.argv) < 3:
        print("Please provide two integer numbers as command line arguments.")
        return
    try:
        A = int(sys.argv[1])
        B = int(sys.argv[2])
    except ValueError:
        print("Invalid input! Please provide two numeric arguments.")
        return

    print("sum:              {}".format(A + B))
    print("difference:       {}".format(A - B))
    print("product:          {}".format(A * B))
    print("integer quotient: {:.0f}".format(A / B))  # truncates towards zero
    print("remainder:        {}".format(A % B))  # same sign as first operand


if __name__ == "__main__":
    main()

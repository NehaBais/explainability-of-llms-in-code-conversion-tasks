import sys


def demo_compare(a, b, semantically):
    print(
        "{} and {} are {}exactly {} equal.".format(
            a, b, "" if a == b else "not ", semantically
        )
    )
    print("{} and {} are {}inequal.".format(a, b, "" if a != b else "not "))
    print("{} is {}ordered before {}.".format(a, "" if a < b else "not ", b))
    print("{} is {}ordered after {}.".format(a, "" if a > b else "not ", b))


def main():
    # Case-sensitive comparisons.
    a = sys.argv[1] if len(sys.argv) > 1 else "1.2.Foo"
    b = sys.argv[2] if len(sys.argv) > 2 else "1.3.Bar"
    demo_compare(a, b, "lexically")

    # Case-insensitive comparisons by converting both strings to lower case.
    a, b = a.lower(), b.lower()
    demo_compare(a, b, "lexically")


if __name__ == "__main__":
    main()

import string


def compare(a, b):
    print(
        f"{a} {2 * (a == b):d} {2 * (a != b):d} {2 * (a > b):d} {2 * (a < b):d} {2 * (a >= b):d} {2 * (a <= b):d} {b}"
    )


def compare_ignore_case(a, b):
    print(
        f"{a} {2 * (a.lower() == b.lower()):d} {2 * (a.lower() != b.lower()):d} {2 * (a.lower() > b.lower()):d} {2 * (a.lower() < b.lower()):d} {2 * (a.lower() >= b.lower()):d} {2 * (a.lower() <= b.lower()):d} {b}"
    )


if __name__ == "__main__":
    print("	eq , ne , gt , lt , ge , le")
    for a, b in zip(av[1::2], av[2::2]):
        compare(a, b)
        compare_ignore_case(a, b)

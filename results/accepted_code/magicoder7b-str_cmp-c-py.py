def compare(a, b):
    print(
        f"{a}\t\t{a == b}\t\t{a != b}\t\t{a > b}\t\t{a < b}\t\t{a >= b}\t\t{a <= b}",
        f"\t\t{b}",
    )
    print(
        f"{a.lower()}\t\t{a == b.lower()}\t\t{a != b.lower()}\t\t{a > b.lower()}\t\t{a < b.lower()}\t\t{a >= b.lower()}\t\t{a <= b.lower()}",
        f"\t\t{b} ignoring case",
    )


def comparecase(a, b):
    print(
        f"{a}\t\t{a == b}\t\t{a != b}\t\t{a > b}\t\t{a < b}\t\t{a >= b}\t\t{a <= b}",
        f"\t\t{b} ignoring case",
    )


if __name__ == "__main__":
    args = ["ball", "YUP", "ball", "BELL", "BALL", "YUP", "bell"]
    for i in range(0, len(args), 2):
        compare(args[i], args[i + 1])
        comparecase(args[i].lower(), args[i + 1].lower())

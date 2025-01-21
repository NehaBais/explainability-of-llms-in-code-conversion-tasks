def compare_strings(a, b, semantic):
    print(f"{a} and {b} are {'not ' if a != b else ''}{semantic} equal.")
    print(f"{a} and {b} are {'not ' if a != b else ''}{semantic} unequal.")
    print(f"{a} is {'not ' if a < b else ''}{semantic} ordered before {b}.")
    print(f"{a} is {'not ' if a > b else ''}{semantic} ordered after {b}.")


def compare_numbers(a, b):
    print(f"{a} and {b} are {'not ' if a != b else ''}numerically equal.")


if __name__ == "__main__":
    # Case-sensitive comparisons.
    a = "1.2.Foo" if len(sys.argv) > 1 else "1.3.Bar"
    b = "1.4.Bar"
    compare_strings(a, b, "lexically")

    # Case-insensitive comparisons by folding both strings to a common case.
    a = a.lower()
    b = b.lower()
    compare_strings(a, b, "lexically")

    # Numeric comparisons; here 'double' could be any type for which the
    # relevant >> operator is defined, eg int, long, etc.
    numA = float(a) if "." in a else int(a)
    numB = float(b) if "." in b else int(b)
    compare_numbers(numA, numB)

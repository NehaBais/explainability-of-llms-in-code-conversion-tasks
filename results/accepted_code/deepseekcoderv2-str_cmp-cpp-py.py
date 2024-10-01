def compare_strings(a, b):
    print("Comparing:", a, "and", b)
    if a == b:
        print(a, "is exactly equal to", b)
    else:
        print(a, "is not exactly equal to", b)

    if a != b:
        print(a, "is not equal to", b)
    else:
        print(a, "is equal to", b)

    if a < b:
        print(a, "comes before", b, "lexically")
    else:
        print(a, "does not come before", b, "lexically")

    if a > b:
        print(a, "comes after", b, "lexically")
    else:
        print(a, "does not come after", b, "lexically")


def main():
    # Case-sensitive comparisons.
    a = input("Enter the first string (default is 1.2.Foo): ") or "1.2.Foo"
    b = input("Enter the second string (default is 1.3.Bar): ") or "1.3.Bar"

    compare_strings(a, b)

    # Case-insensitive comparisons by folding both strings to a common case.
    print("\nCase-insensitive comparison:")
    a = a.lower()
    b = b.lower()
    compare_strings(a, b)

    # Numeric comparisons; here 'double' could be any type for which the relevant >> operator is defined, eg int, long, etc.
    numA, numB = float(a), float(b)
    if numA == numB:
        print("Both strings are equal to", a, "and", b)
    else:
        print("Neither string is exactly equal to the other.")

    # Other kinds of string comparisons that the language provides.
    print("\nOther string comparison operations:")
    if a < b:
        print(a, "comes before", b, "lexically.")
    elif a > b:
        print(a, "comes after", b, "lexically.")


if __name__ == "__main__":
    main()

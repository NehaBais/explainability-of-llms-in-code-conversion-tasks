def demo_compare(a, b, semantically):
    if a == b:
        print(f"{a} and {b} are exactly {semantically} equal.")
    else:
        print(f"{a} and {b} are not {semantically} equal.")

    if a != b:
        print(f"{a} and {b} are {semantically} unequal.")
    else:
        print(f"{a} and {b} are not {semantically} unequal.")

    if a < b:
        print(f"{a} is lexically ordered before {b}.")
    else:
        print(f"{a} is not lexically ordered before {b}.")

    if a > b:
        print(f"{a} is lexically ordered after {b}.")
    else:
        print(f"{a} is not lexically ordered after {b}.")


# Case-sensitive comparisons.
a = "1.2.Foo"  # sys.argv[1] in C++ if provided
b = "1.3.Bar"  # sys.argv[2] in C++ if provided
demo_compare(a, b, "lexically")

# Case-insensitive comparisons by folding both strings to a common case.
a = a.lower()
b = b.lower()
demo_compare(a, b, "lexically")

# Numeric comparisons; here float could be any type for which the relevant casting is defined, eg int, long, etc.
numA = float(a)  # Assuming a is numeric
numB = float(b)  # Assuming b is numeric
demo_compare(numA, numB, "numerically")

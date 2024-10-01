def compare_strings(a, b):
    # Case-sensitive comparison
    if a == b:
        print(f"{a} and {b} are exactly equal.")
    else:
        print(f"{a} and {b} are not exactly equal.")

    if a != b:
        print(f"{a} and {b} are not unequal.")
    else:
        print(f"{a} and {b} are unequal.")

    if a < b:
        print(f"{a} is ordered before {b}.")
    else:
        print(f"{a} is not ordered before {b}.")

    if a > b:
        print(f"{a} is ordered after {b}.")
    else:
        print(f"{a} is not ordered after {b}.")


# Case-sensitive comparison
a = "1.2.Foo"
b = "1.3.Bar"
compare_strings(a, b)

# Case-insensitive comparison
a = a.lower()
b = b.lower()
compare_strings(a, b)

# Numeric comparison
num_a = float(a)
num_b = float(b)
compare_strings(num_a, num_b)

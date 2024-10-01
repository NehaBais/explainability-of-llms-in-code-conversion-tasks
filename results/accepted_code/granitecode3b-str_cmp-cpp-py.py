def demo_compare(a, b, semantically):
    print(f"{a} and {b} are {'not ' if a == b else ''}{semantically} equal.")
    print(f"{a} and {b} are {'not ' if a != b else ''}{semantically} inequal.")
    print(f"{a} is {'not ' if a < b else ''}{semantically} ordered before {b}.")
    print(f"{a} is {'not ' if a > b else ''}{semantically} ordered after {b}.")


# Case-sensitive comparisons.
a = input("Enter the first string: ")
b = input("Enter the second string: ")
demo_compare(a, b, "lexically")
# Case-insensitive comparisons by folding both strings to a common case.
a = a.lower()
b = b.lower()
demo_compare(a, b, "lexically")
# Numeric comparisons; here 'double' could be any type for which the
# relevant >> operator is defined, eg int, long, etc.
numA = float(input("Enter the first number: "))
numB = float(input("Enter the second number: "))
demo_compare(numA, numB, "numerically")

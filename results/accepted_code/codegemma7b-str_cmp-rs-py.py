# String comparison in Python

a = "abc"
b = "Bac"

# Exact equality
if a == b:
    print("The strings are equal")

# Inequality
if a != b:
    print("The strings are not equal")

# Lexicographical comparison
if a > b:
    print("The first string is lexically after the second")
elif a < b:
    print("The first string is lexically before the second")

# Case-sensitive comparison
if a.lower() > b.lower():
    print("The first string is lexically after the second (case-sensitive)")
elif a.lower() < b.lower():
    print("The first string is lexically before the second (case-sensitive)")

# Case-insensitive comparison
if a.lower() == b.lower():
    print("Both strings are equal when ignoring case")

# Numeric string comparison
a = "10"
b = "5"

if a > b:
    print("The first string is numerically greater than the second")
elif a < b:
    print("The first string is numerically smaller than the second")

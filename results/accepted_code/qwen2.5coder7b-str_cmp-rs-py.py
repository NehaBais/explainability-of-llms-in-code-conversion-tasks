a = "abc"
b = "Bac"

# Strings are compared as per their ASCII values.
if a == b:
    print("The strings are equal")

if a != b:
    print("The strings are not equal")

if a > b:
    print("The first string is lexically after the second")

if a < b:
    print("The first string is lexically before the second")

# Case-insensitive comparison
if a.lower() == b.lower():
    print("Both strings are equal when ignoring case")

a = "abc"
b = "Bac"

# Strings are coerced to str when borrowed and needed
if a == b:
    print("The strings are equal")
if a != b:
    print("The strings are not equal")
if a > b:
    print("The first string is lexically after the second")
if a < b:
    print("The first string is lexically before the second")
if a >= b:
    print("The first string is not lexically before the second")
if a <= b:
    print("The first string is not lexically after the second")

# case-insensitives:

# equality
# this avoids new allocations
if a.lower() == b.lower():
    print("Both strings are equal when ignoring case")

# everything else, create owned Strings, then compare as above
a2 = a.upper()
b2 = b.upper()

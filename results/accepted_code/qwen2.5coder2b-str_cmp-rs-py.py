a = "abc"
b = "Bac"

# Exact equality
if a == b:
    print("The strings are equal")

# Inequality comparison
if a != b:
    print("The strings are not equal")

# Lexicographic order
if a > b:
    print("The first string is lexically after the second")
elif a < b:
    print("The first string is lexically before the second")

# Lexicographic order in reverse
if a >= b:
    print("The first string is not lexically before the second")
elif a <= b:
    print("The first string is not lexically after the second")

# Case-insensitive equality using .upper() method for all strings
a2 = a.upper()
b2 = b.upper()

if a2 == b2:
    print("Both strings are equal when ignoring case")

# Using sorted function to compare lexicographically
sorted_a = sorted(a)
sorted_b = sorted(b)

if sorted_a < sorted_b:
    print("The first string is lexically before the second")
elif sorted_a > sorted_b:
    print("The first string is lexically after the second")

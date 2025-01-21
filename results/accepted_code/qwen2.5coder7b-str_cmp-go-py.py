c = "cat"
d = "dog"

# Comparing two strings for exact equality
if c == d:
    print(f"{c} is exactly equal to {d}")
else:
    print(f"{c} is not exactly equal to {d}")

# Comparing two strings for inequality (i.e., the inverse of exact equality)
if c != d:
    print(f"{c} is not equal to {d}")
else:
    print(f"{c} is equal to {d}")

# Comparing two strings to see if one is lexically ordered before than the other
if c < d:
    print(f"{c} is lexicographically less than {d}")
else:
    print(f"{c} is not lexicographically less than {d}")

# Comparing two strings to see if one is lexically ordered after than the other
if c > d:
    print(f"{c} is lexicographically greater than {d}")
else:
    print(f"{c} is not lexicographically greater than {d}")

# How to achieve both case sensitive comparisons and case insensitive comparisons within the language
if c.lower() == d.lower():
    print("Case insensitive comparison: The strings are equal")
else:
    print("Case insensitive comparison: The strings are not equal")

# How the language handles comparison of numeric strings if these are not treated lexically
numeric_c = "100"
numeric_d = "20"

if numeric_c > numeric_d:
    print(f"{numeric_c} is lexicographically greater than {numeric_d}")
else:
    print(f"{numeric_c} is not lexicographically greater than {numeric_d}")

# Demonstrate other kinds of string comparisons that the language provides, particularly as it relates to your type system
string_with_int = "200"
int_value = 100

try:
    if int(string_with_int) > int_value:
        print(f"{string_with_int} is numerically greater than {int_value}")
except ValueError:
    print("The string cannot be converted to an integer for numerical comparison")

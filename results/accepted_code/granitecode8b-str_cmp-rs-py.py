a = "abc"
b = "Bac"
# Comparing two strings for exact equality
if a == b:
    print("The strings are equal")
# Comparing two strings for inequality (i.e., the inverse of exact equality)
if a != b:
    print("The strings are not equal")
# Comparing two strings to see if one is lexically ordered before than the other
if a < b:
    print("The first string is lexically before the second")
# Comparing two strings to see if one is lexically ordered after than the other
if a > b:
    print("The first string is lexically after the second")
# How to achieve both case sensitive comparisons and case insensitive comparisons within the language
# Case-sensitive comparison
if a < b:
    print("The first string is lexically before the second")
elif a == b:
    print("The strings are equal")
else:
    print("The first string is lexically after the second")
# Case-insensitive comparison using ascii_lowercase method
if a.lower() < b.lower():
    print("The first string is lexically before the second when ignoring case")
elif a.lower() == b.lower():
    print("Both strings are equal when ignoring case")
else:
    print("The first string is lexically after the second when ignoring case")

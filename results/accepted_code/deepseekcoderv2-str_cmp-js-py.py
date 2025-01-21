# Comparing two strings for exact equality
print("abcd" == "abcd")  # True
# Comparing two strings for exact type and value equality
print("abcd" is "abcd")  # False (is checks identity, not value)
# Comparing two strings for inequality (the inverse of exact equality)
print("abcd" != "dcba")  # True
# Comparing two strings to see if one is lexically ordered before than the other
print("abcd" < "dcba")  # True
# Comparing two strings to see if one is lexically ordered after than the other
print("abcd" > "dcba")  # False
# Case insensitive comparison (case sensitive)
print("ABCD".lower() == "abcd".lower())  # True
# Case insensitive equality check (lexical order doesn't matter for exact value equality)
print("ABCD" == "abcd")  # False
# Comparing numeric strings if they are not treated lexically
print(int("123") == int("123"))  # True
print(type(int("123")) is type(int("123")))  # True

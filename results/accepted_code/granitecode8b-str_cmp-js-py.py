# Exact equality
print("abcd" == "abcd")  # True
# Inequality
print("abcd" != "abcd")  # False
# Lexically ordered before
print("abcd" < "dcba")  # True
# Lexically ordered after
print("abcd" > "dcba")  # False
# Case sensitive comparison
print("ABCD" == "abcd")  # False
# Case insensitive comparison
print("ABCD".lower() == "abcd".lower())  # True

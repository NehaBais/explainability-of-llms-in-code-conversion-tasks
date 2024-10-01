# == equal value
print("abcd" == "abcd")  # True

# === equal value and equal type
print("abcd" is "abcd")  # True

# != not equal value
print("abcd" != "dcba")  # True

# !== not equal value or not equal type
print("abcd" is not "dcba")  # True

# < lexically ordered before
print("abcd" < "dcba")  # True

# > lexically ordered after
print("abcd" > "dcba")  # False

# Case sensitive comparison
print("ABCD" == "abcd")  # False

# Case insensitive comparison
print("ABCD".lower() == "abcd".lower())  # True

# Numeric string comparison (treated lexically)
print("123" == "123")  # True

# Other comparison methods
print("abcd".startswith("ab"))  # True
print("abcd".endswith("cd"))  # True
print("abcd".find("bc") != -1)  # True
print("abcd".rfind("bc") != -1)  # True
print("abcd".count("b") == 2)  # True
print("abcd".index("b") == 1)  # True
print("abcd".rindex("b") == 3)  # True

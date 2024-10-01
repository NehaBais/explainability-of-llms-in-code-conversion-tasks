print("abcd" == "abcd")  # True
print("abcd" == "ABCD")  # False

# Case insensitive comparison:
print("abcd".lower() == "ABCD".lower())  # True

# Inequality checks:
print("abcd" != "abcd")  # False
print("abcd" != "ABCD")  # True

# Lexical order checks (Python treats strings as sequences of Unicode code points):
print("abcd" < "ABCD")  # True, 'a' is before 'A' in the Unicode table.
print("abcd" > "ABCD")  # False

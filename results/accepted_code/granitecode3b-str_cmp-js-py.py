# Comparing two strings for exact equality
print("abcd" == "abcd") # True
print("abcd" === "abcd") # True
# Comparing two strings for inequality
print(123 == "123") # True
print(123 === "123") # False
# Comparing two strings to see if one is lexically ordered before than the other
print("abcd" < "dcba") # True
# Comparing two strings to see if one is lexically ordered after than the other
print("abcd" > "dcba") # False
# Case insensitive comparison
print("ABCD" == "abcd".lower()) # True
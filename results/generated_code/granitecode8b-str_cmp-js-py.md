Here is the Python code that demonstrates how to compare two strings and achieve lexical comparison:
```
# Exact equality
print("abcd" == "abcd") # True
# Inequality
print("abcd" != "abcd") # False
# Lexically ordered before
print("abcd" < "dcba") # True
# Lexically ordered after
print("abcd" > "dcba") # False
# Case sensitive comparison
print("ABCD" == "abcd") # False
# Case insensitive comparison
print("ABCD".lower() == "abcd".lower()) # True
```
In Python, the `==` operator is used to compare two strings for exact equality. The `!=` operator is used to compare two strings for inequality (i.e., the inverse of exact equality). The `<` and `>` operators are used to compare two strings lexically, where "abcd" is considered less than "dcba". 
In Python, case sensitivity is not a factor when comparing strings. However, if you need to perform a case insensitive comparison, you can use the `lower()` method to convert both strings to lowercase before comparing them. 
Python provides other string comparisons such as `in`, `not in`, and `is` which are related to its type system. For example, the `in` operator is used to check if a value is present in a sequence or collection, while the `is` operator checks for object identity.


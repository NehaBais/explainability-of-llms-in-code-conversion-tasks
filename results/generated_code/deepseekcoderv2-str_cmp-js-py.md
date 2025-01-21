 Sure, here is the equivalent Python code that demonstrates the specified comparisons:

```python
# Comparing two strings for exact equality
print("abcd" == "abcd")  # True
# Comparing two strings for exact type and value equality
print("abcd" is "abcd")   # False (is checks identity, not value)
# Comparing two strings for inequality (the inverse of exact equality)
print("abcd" != "dcba")  # True
# Comparing two strings to see if one is lexically ordered before than the other
print("abcd" < "dcba")   # True
# Comparing two strings to see if one is lexically ordered after than the other
print("abcd" > "dcba")   # False
# Case insensitive comparison (case sensitive)
print("ABCD".lower() == "abcd".lower())  # True
# Case insensitive equality check (lexical order doesn't matter for exact value equality)
print("ABCD" == "abcd")  # False
# Comparing numeric strings if they are not treated lexically
print(int("123") == int("123"))  # True
print(type(int("123")) is type(int("123")))  # True
```

### Explanation:
1. **Exact Equality**: In Python, the `==` operator checks for value equality and `is` checks for identity (same object in memory). The example uses `==` to check if the strings are equal in value but not necessarily the same object.
2. **Type and Value Equality**: Using `===` is not idiomatic in Python; instead, you can use the `type()` function to check types explicitly or use `isinstance()` for type checking. The example uses `is` which checks identity.
3. **Inequality**: The `!=` operator is used to check if two values are not equal.
4. **Lexical Ordering**: Python's comparison operators (`<`, `>`) work as expected for lexicographical order.
5. **Case Insensitivity**: In Python, you can convert strings to lowercase using the `.lower()` method and then compare them. This is demonstrated with both direct equality checks and lexical comparisons.
6. **Numeric String Comparison**: Converting numeric string representations to integers and comparing their values directly.

Note: The `is` operator in Python checks for object identity, not value equality. For checking value equality of objects (like strings), you should use the `==` operator or other appropriate methods depending on your requirements.

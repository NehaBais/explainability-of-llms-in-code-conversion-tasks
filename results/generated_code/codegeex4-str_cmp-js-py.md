In Python, the comparison operators work in a similar way as in JavaScript, with the exception that Python does not implicitly convert between strings and integers. However, you can perform string comparisons case-insensitively using the lower() method.

Here is how the equivalent code in Python would look like:

```python
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
```

Remember, Python is case-sensitive. If you want a comparison to be case-insensitive, you can convert both strings to lower or upper case using the .lower() or .upper() string methods respectively.

Note: Strings are compared based on Unicode code points. 'A' has a higher Unicode code point value than 'a', so "abcd" < "ABCD" returns True. If you want to compare strings ignoring case, use .lower() before comparing.

Python does not have a type-safe string comparison in the same way JavaScript's triple equals (===) works. In Python, comparing two objects of different types will result in an error unless the object has a custom __eq__ method.

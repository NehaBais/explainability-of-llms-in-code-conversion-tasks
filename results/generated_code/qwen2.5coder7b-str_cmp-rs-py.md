Here is how you can convert the given Rust code to Python. Python is inherently case-sensitive and has built-in functionality for string comparison.

```python
a = "abc"
b = "Bac"

# Strings are compared as per their ASCII values.
if a == b:
    print("The strings are equal")

if a != b:
    print("The strings are not equal")
    
if a > b:
    print("The first string is lexically after the second")

if a < b:
    print("The first string is lexically before the second")

# Case-insensitive comparison
if a.lower() == b.lower():
    print("Both strings are equal when ignoring case")
```

Note: For Python to perform a case insensitive comparison, it converts both strings to lower case (or upper case) and then compares them. This creates a new string every time you do this conversion, so for large strings this can be costly.

In contrast, Rust has built-in functionality that does not require creating new strings (which is why `eq_ignore_ascii_case` is efficient).

As for numeric strings, Python will indeed compare their values lexicographically (i.e., like numbers are represented in words). So "10" would come before "2". If you want to compare them numerically, you would need to convert them to integers or floats first.

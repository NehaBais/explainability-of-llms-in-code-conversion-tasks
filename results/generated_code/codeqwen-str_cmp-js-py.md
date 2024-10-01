The equivalent code in Python is as follows:

```python
print(
    "abcd" == "abcd",  # True
    "abcd" != "abcd",  # False
    "ABCD" != "abcd",  # True
    "123" < "123",     # False (numeric strings are not treated lexically in Python)
    "123" > "123",     # False
    "abcd".lower() == "abcd".lower(),  # True (case insensitive comparison)
)
```

Python does not have a direct way to compare two strings for exact equality, inequality or lexical ordering. For this, we use the `==`, `!=` and `<=` operators. The `==` operator checks if both sides are equal while `!=` checks if they are not equal. But Python doesn't support string comparison for lexical ordering directly using '<', '>'.

Also note that in Python, comparisons between strings are case sensitive by default. If you want to perform case-insensitive comparisons, use the `lower()` or `upper()` method to convert both strings to either lowercase or uppercase before performing comparison.

Python also does not have a direct way to compare numeric strings. Numeric strings are compared lexically in Python, which means that if one string is greater than the other lexically (i.e., when looking at each character from left to right), then it is considered greater. This behavior doesn't apply to integer comparisons because integers are treated as numbers and are compared numerically.

Python does not support many other kinds of string comparisons in its built-in types like `str`. But Python allows users to define their own comparison methods for custom classes using the `__lt__`, `__le__`, `__gt__`, `__ge__` methods, which allow for more complex comparisons.

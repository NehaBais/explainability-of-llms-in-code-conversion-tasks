```python
# Python string comparison operators:
c = "cat"
d = "dog"
if c == d:
    print(c, "is bytewise identical to", d)
if c != d:
    print(c, "is bytewise different from", d)
if c > d:
    print(c, "is lexically bytewise greater than", d)
if c < d:
    print(c, "is lexically bytewise less than", d)
if c >= d:
    print(c, "is lexically bytewise greater than or equal to", d)
if c <= d:
    print(c, "is lexically bytewise less than or equal to", d)

# Python is dynamically typed and will automatically compare a value of string
# type to a value of numeric type.

# A case insensitive compare can be done with a function in the string
# library in the Python standard library:
eqf = "when interpreted as UTF-8 and compared under Unicode simple case folding rules."
if c.lower() == d.lower():
    print(c, "equal to", d, eqf)
else:
    print(c, "not equal to", d, eqf)

# Python provides functions for more complex string comparisons, including
# Unicode normalization, collation tables, and locale sensitive comparisons.
# These functions are available in the "locale" module.
```

**Note:**

* The `lower()` method converts a string to lowercase.
* The `locale` module provides functions for locale-sensitive string comparisons.
* In Python, the comparison operators automatically perform lexical comparisons for strings.
* Python automatically handles numeric string comparisons as if they were numbers.

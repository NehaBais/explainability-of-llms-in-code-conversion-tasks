 Here's the equivalent Python code that demonstrates the same functionality as your Go code:

```python
# Python string comparison operators:
c = "cat"
d = "dog"
if c == d:
    print(f"{c} is bytewise identical to {d}")
if c != d:
    print(f"{c} is bytewise different from {d}")
if c > d:
    print(f"{c} is lexically bytewise greater than {d}")
if c < d:
    print(f"{c} is lexically bytewise less than {d}")
if c >= d:
    print(f"{c} is lexically bytewise greater than or equal to {d}")
if c <= d:
    print(f"{c} is lexically bytewise less than or equal to {d}")

# Case insensitive compare can be done with the `casefold()` method in Python:
eqf = "when interpreted as UTF-8 and compared under Unicode simple case folding rules."
if c.casefold() == d.casefold():
    print(f"{c} equal to {d} {eqf}")
else:
    print(f"{c} not equal to {d} {eqf}")
```

This Python code covers the following comparisons and functionalities as demonstrated in your Go code:
- Comparing two strings for exact equality (`if c == d:`).
- Comparing two strings for inequality (the inverse of exact equality, `if c != d:`).
- Comparing two strings to see if one is lexically ordered before (`if c < d:`) or after (`if c > d:`) the other.
- Achieving case sensitive comparisons with Python's built-in operators and functions like `casefold()` for case insensitive comparison.

Note that in Python, string comparison follows lexicographical order based on Unicode values by default, which is similar to how Go handles string comparison but without bytewise considerations unless explicitly specified as in the Go code you provided.

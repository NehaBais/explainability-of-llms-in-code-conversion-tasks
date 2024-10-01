Sure, I can help you with that! Here's the converted code in Python:
```
c = "cat"
d = "dog"
if c == d:
    print(f"{c} is bytewise identical to {d}")
else:
    print(f"{c} is bytewise different from {d}")

# Comparing two strings for lexical ordering
if c < d:
    print(f"{c} is lexically bytewise less than {d}")
elif c > d:
    print(f"{c} is lexically bytewise greater than {d}")
else:
    print(f"{c} is lexically bytewise equal to {d}")

# Comparing two strings for case insensitive equality
if c.lower() == d.lower():
    print(f"{c} is case insensitive identical to {d}")
else:
    print(f"{c} is case insensitive different from {d}")

# Comparing two strings for numeric comparison (not supported in Python)
#if c < d:
    #print(f"{c} is numerically less than {d}")
#elif c > d:
    #print(f"{c} is numerically greater than {d}")
#else:
    #print(f"{c} is numerically equal to {d}")
```
Note that Python does not support direct comparison of string and numeric values, so we need to use the `lower()` method to convert both strings to lowercase before comparing them. Also, since Python uses Unicode for strings, we can use the `strings` module's `EqualFold()` function to perform case-insensitive equality comparison.

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

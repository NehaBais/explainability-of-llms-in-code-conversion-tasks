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
# if c < d:
# print(f"{c} is numerically less than {d}")
# elif c > d:
# print(f"{c} is numerically greater than {d}")
# else:
# print(f"{c} is numerically equal to {d}")

# Python String Comparison Operators:
c = "cat"
d = "dog"
if c == d:
    print(f"{c} is bytewise identical to {d}")

if c != d:
    print(f"{c} is bytewise different from {d}")


# Python does not have '>' and '<' operators for string comparison.
# But we can use the built-in function `lex_compare` to achieve this purpose:
def lex_compare(a, b):
    return (a > b) - (a < b)


if lex_compare(c, d) > 0:
    print(f"{c} is lexically bytewise greater than {d}")
elif lex_compare(c, d) < 0:
    print(f"{c} is lexically bytewise less than {d}")
else:
    print(f"{c} and {d} are equal in terms of lexicographical order")

# For case insensitive comparison we can use `lower()` function:
if c.lower() == d.lower():
    print(f"{c} (case insensitive) is equal to {d} (case insensitive)")
else:
    print(f"{c} (case insensitive) is not equal to {d} (case insensitive)")

# Python handles numeric strings lexically by comparing them as sequences of unicode
# code points. This means it treats '10' and '2' as ordered differently than in Golang,
# where '10' is greater than '2'.

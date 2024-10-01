# Python string comparison operators:
c = "cat"
d = "dog"
if c == d:
    print(f"{c} is bytewise identical to {d}")
if c != d:
    print(f"{c} is not equal to {d}")
if c > d:
    print(f"{c} is lexically greater than {d}")
if c < d:
    print(f"{c} is lexically less than {d}")
if c >= d:
    print(f"{c} is lexically greater than or equal to {d}")
if c <= d:
    print(f"{c} is lexically less than or equal to {d}")


# Python strings are not strongly typed and will directly compare a value of string
# type to a value of numeric type, e.g., 1 < "a". If this needs to be done you may need to use the functions from the standard library:
def is_int(s):
    try:
        int(s)
        return True
    except ValueError:
        return False


# A case insensitive compare can also be done with a function in the built-in string module:
if c.lower() == d.lower():
    print(f"{c} is equal to {d}")
else:
    print(f"{c} is not equal to {d}")

# Comparing two strings for exact equality can be done with the "==" operator, while comparing two strings for inequality can be done with the "!=" operator.

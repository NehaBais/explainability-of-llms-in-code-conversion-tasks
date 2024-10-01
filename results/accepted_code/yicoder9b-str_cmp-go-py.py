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
# Python compares strings lexographically (i.e., dictionary order)
# and not as byte sequences which is different from Go.
if c >= d:
    print(c, "is lexically greater than or equal to", d)
if c <= d:
    print(c, "is lexically less than or equal to", d)

# Python is dynamically typed and can compare a value of string type
# to a value of numeric type. However, it might not give the expected result as it will convert the number into a string first then compares them lexographically.

# Case insensitive comparison in python:
if c.lower() == d.lower():
    print(
        c,
        "is equal to",
        d,
        " when interpreted as UTF-8 and compared under Unicode simple case folding rules",
    )
else:
    print(
        c,
        "not equal to",
        d,
        " when interpreted as UTF-8 and compared under Unicode simple case folding rules.",
    )

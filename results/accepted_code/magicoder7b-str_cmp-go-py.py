def main():
    # Python string comparison operators:
    c = "cat"
    d = "dog"
    if c == d:
        print(c, "is identical to", d)
    else:
        print(c, "is different from", d)

    if c > d:
        print(c, "is lexically greater than", d)
    elif c < d:
        print(c, "is lexically less than", d)
    else:
        print(c, "is equal to", d)

    eqf = "when interpreted as UTF-8 and compared under Unicode simple case folding rules."
    if c.lower() == d.lower():
        print(c, "equal to", d, eqf)
    else:
        print(c, "not equal to", d, eqf)

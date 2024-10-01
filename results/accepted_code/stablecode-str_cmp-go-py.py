import string

def main():
    # Python string comparison operators:

    s = "cat"
    t = "dog"
    if s == t:
        print(f"'{s}' is bytewise identical to '{t}'")
    elif s != t:
        print(f"'{s}' is bytewise different from '{t}'")
    else:
        raise ValueError("Strings cannot be equal if they are not treated lexically"))

    # Python's string comparison methods interpret strings as sequences of bytes, and these comparisons work bytewise.
    # If you need to perform a lexical comparison, you can use the `locale` module in Python's standard library.
    # This module provides support for locale-sensitive operations, including collation tables.

    if s > t:
        print(f"'{s}' is bytewise greater than '{t}'")
    elif s < t:
        print(f"'{s}' is bytewise less than '{t}'")
    else:
        raise ValueError("Strings cannot be compared for equality if they are not treated lexically"))

    # Python's built-in string comparison operators (`==`, `!=`, `<`, `<=`) work with bytes and do not perform lexical comparisons.

if __name__ == "__main__":
    main()
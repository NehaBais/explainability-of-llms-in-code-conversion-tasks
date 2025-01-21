def main():
    # only same types can be compared
    # str and str or &str and &str
    # exception: strict equality and inequality also work on &str and str
    a = "abc"
    b = "Bac".upper()  # Convert to uppercase for case-insensitive comparison

    # Strings are coerced to str when borrowed and needed
    if a == b:
        print("The strings are equal")
    if a != b:
        print("The strings are not equal")
    if a > b:
        print("The first string is lexically after the second")
    if a < b:
        print("The first string is lexically before the second")
    if a >= b:
        print("The first string is not lexically before the second")
    if a <= b:
        print("The first string is not lexically after the second")

    # case-insensitives:

    # equality
    # this avoids new allocations
    if a.lower() == b.lower():
        print("Both strings are equal when ignoring case")

    # everything else, create owned str, then compare as above
    a2 = a.upper()
    b2 = b.upper()

    # repeat checks


if __name__ == "__main__":
    main()

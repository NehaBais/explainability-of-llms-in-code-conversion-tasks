def main():
    # only same types can be compared
    # String and String or str and str
    # exception: strict equality and inequality also work on str and String
    a = "abc"
    b = "Bac".lower()

    # Strings are coerced to str when borrowed and needed
    if a == b:
        print("The strings are equal")
    if a != b:
        print("The strings are not equal")
    if a > b:
        print("The first string is lexically after the second")
    if a < b:
        print("The first string is lexically before the second")

    # case-insensitives:

    # equality
    # this avoids new allocations
    if a.lower() == b.lower():
        print("Both strings are equal when ignoring case")


if __name__ == "__main__":
    main()

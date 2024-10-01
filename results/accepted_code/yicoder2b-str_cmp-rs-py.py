def main():
    # Python handles string comparison directly, so you don't need to do any special handling for this
    a = "abc"
    b = "Bac"

    # Strings are compared lexically in python
    if a == b:
        print("The strings are equal")
    elif a != b:
        print("The strings are not equal")
    elif a > b:
        print("The first string is lexically after the second")
    elif a < b:
        print("The first string is lexically before the second")
    else:
        print("The first string is not lexically before or after the second")

    # Case insensitivity can be achieved using Python's built-in functions for case handling
    a_upper = a.upper()  # This will turn "abc" into "ABC"
    b_upper = b.upper()

    if a == b:
        print("The strings are equal when ignoring case")
    elif a > b:
        print("The first string is lexically after the second when ignoring case")
    elif a < b:
        print("The first string is lexically before the second when ignoring case")
    else:
        print(
            "The first string and the second string are not lexically before or after each other when ignoring case"
        )


if __name__ == "__main__":
    main()

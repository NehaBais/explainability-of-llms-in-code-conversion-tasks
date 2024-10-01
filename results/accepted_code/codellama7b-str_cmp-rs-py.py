# The use statement has been removed because it requires additional dependencies that are not included in the standard library of Python.


def main():
    a = "abc"  # string literal
    b = (
        "Bac".upper()
    )  # creates an uppercase version of the string, equivalent to the Rust code using .to_ascii_uppercase()

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

    # Case-insensitives:
    if a.lower() == b.lower():
        print("Both strings are equal when ignoring case")


# Repeat checks with lowercase versions of the strings.

if __name__ == "__main__":
    main()

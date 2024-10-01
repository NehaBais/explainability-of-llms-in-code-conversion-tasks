def main():

    a = "abc"
    b = "Bac"

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
    if a.lower() == b.lower():
        print("Both strings are equal when ignoring case")


main()

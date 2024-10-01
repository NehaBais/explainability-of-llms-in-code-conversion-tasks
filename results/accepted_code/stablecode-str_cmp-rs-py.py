def main():
    # Only same types can be compared.
    # Strings are coerced to &str when borrowed and needed.
    a = "abc"
    b = "Bac"

    if a == b:
        print("The strings are equal.")
    if a != b:
        print("The strings are not equal.")

    # Lexical comparison.
    if a > &b:
        print("The first string is lexically after the second.")
    if a < &b:
        print("The first string is lexically before the second.")

    # Case-insensitive comparisons.
    if a == b.lower():
        print("Both strings are equal when ignoring case.")

    # Additional string comparison methods.
    a2 = a.upper()
    b2 = b.upper()

    if a2 < b2:
        print("The first string is lexically before the second, considering upper-case letters as different from their lower-case counterparts.")

    if a2 > b2:
        print("The first string is lexically after the second, considering upper-case letters as different from their lower-case counterparts.")

main()
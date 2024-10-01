# Import the necessary module for string comparison
import string


# Define the function to compare two strings
def compare_strings(a, b):
    # Compare two strings for exact equality
    eq = a == b

    # Compare two strings for inequality
    ne = a != b

    # Compare two strings to see if one is lexically ordered before than the other
    lt = a < b

    # Compare two strings to see if one is lexically ordered after than the other
    gt = a > b

    # Compare two strings to see if they are equal ignoring case
    ceq = a.lower() == b.lower()

    # Compare two strings to see if they are not equal ignoring case
    cne = a.lower() != b.lower()

    # Compare two strings to see if one is lexically ordered before than the other ignoring case
    clt = a.lower() < b.lower()

    # Compare two strings to see if one is lexically ordered after than the other ignoring case
    cgt = a.lower() > b.lower()

    return f"{a} {eq} {ne} {gt} {lt} {ge} {le} {b}"


# Test the function with different strings
print(compare_strings("ball", "bell"))
print(compare_strings("YUP", "yep"))

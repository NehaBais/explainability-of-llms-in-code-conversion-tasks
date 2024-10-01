import re


def demo_compare(a, b, semantically):
    print(f"{a} and {b} are {'not ' if a != b else ''}{semantically} equal.")
    print(f"{a} and {b} are {'not ' if a == b else ''}{semantically}inequal.")
    print(f"{a} is {'not ' if a < b else ''}{semantically} ordered before {b}.")
    print(f"{a} is {'not ' if a > b else ''}{semantically} ordered after {b}.")


def compare_strings(a, b):
    demo_compare(a, b, "lexically")

    # Case-insensitive comparisons by folding both strings to a common case.
    a = re.sub(r"[A-Z]", lambda m: chr(ord(m.group()) + 32), a)
    b = re.sub(r"[A-Z]", lambda m: chr(ord(m.group()) + 32), b)
    demo_compare(a, b, "lexically")

    # Numeric comparisons; here 'double' could be any type for which the
    # relevant >> operator is defined, eg int, long, etc.
    numA = float(re.sub(r"[^0-9.]", "", a))
    numB = float(re.sub(r"[^0-9.]", "", b))
    demo_compare(numA, numB, "numerically")
    return a == b

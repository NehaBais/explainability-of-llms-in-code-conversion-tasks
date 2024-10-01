import itertools


def demo_compare(a, b, semantically):
    print(f'{a} and {b} are {"not " if a != b else ""}{semantically} equal.')

    print(f'{a} and {b} are {"not " if a == b else ""}{semantically} inequal.')

    print(f'{a} is {"not " if a < b else ""}{semantically} ordered before {b}.')
    print(f'{a} is {"not " if a > b else ""}{semantically} ordered after {b}.')


def main():
    # Case-sensitive comparisons.
    a = "1.2.Foo" if len(sys.argv) > 1 else "1.2.Foo"
    b = "1.3.Bar" if len(sys.argv) > 2 else "1.3.Bar"
    demo_compare(a, b, "lexically")

    # Case-insensitive comparisons by folding both strings to a common case.
    a = a.lower()
    b = b.lower()
    demo_compare(a, b, "lexically")

    # Numeric comparisons; here 'float' could be any type for which the
    # relevant >> operator is defined, eg int, long, etc.
    numA, numB = map(float, [a, b])
    demo_compare(numA, numB, "numerically")
    return a == b

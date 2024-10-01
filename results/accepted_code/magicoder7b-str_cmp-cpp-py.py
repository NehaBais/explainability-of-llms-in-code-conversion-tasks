def demo_compare(a, b, semantically):
    print(f"{a} and {b} are {'' if a == b else 'not '}exactly {semantically} equal.")
    print(f"{a} and {b} are {'' if a != b else 'not '}{semantically}inequal.")
    print(f"{a} is {'' if a < b else 'not '}{semantically} ordered before {b}.")
    print(f"{a} is {'' if a > b else 'not '}{semantically} ordered after {b}.")


if __name__ == "__main__":
    # Case-sensitive comparisons.
    a = input("Enter the first string (or just press enter for default): ") or "1.2.Foo"
    b = (
        input("Enter the second string (or just press enter for default): ")
        or "1.3.Bar"
    )
    demo_compare(a, b, "lexically")

    # Case-insensitive comparisons by converting both strings to lowercase.
    a = a.lower()
    b = b.lower()
    demo_compare(a, b, "lexically")

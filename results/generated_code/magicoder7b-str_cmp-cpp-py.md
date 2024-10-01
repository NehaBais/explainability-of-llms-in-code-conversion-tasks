 In Python, we can use the built-in `==`, `!=`, `<` and `>` operators for string comparison. For comparing two strings lexicographically, we can use the `str.lower()` or `str.upper()` method to convert them to a common case, before doing the comparison:

```python
def demo_compare(a, b, semantically):
    print(f"{a} and {b} are {'' if a == b else 'not '}exactly {semantically} equal.")
    print(f"{a} and {b} are {'' if a != b else 'not '}{semantically}inequal.")
    print(f"{a} is {'' if a < b else 'not '}{semantically} ordered before {b}.")
    print(f"{a} is {'' if a > b else 'not '}{semantically} ordered after {b}.")

if __name__ == "__main__":
    # Case-sensitive comparisons.
    a = input("Enter the first string (or just press enter for default): ") or "1.2.Foo"
    b = input("Enter the second string (or just press enter for default): ") or "1.3.Bar"
    demo_compare(a, b, "lexically")

    # Case-insensitive comparisons by converting both strings to lowercase.
    a = a.lower()
    b = b.lower()
    demo_compare(a, b, "lexically")
```
In this script:
- We take two string inputs from the user, or use default values if no input is provided.
- The `demo_compare` function takes three arguments: a string to compare (either the user's input or a default value), the comparison type ('lexically'), and a boolean indicating whether we are comparing strings for ordering purposes (True) or not (False).
- We use Python's built-in string comparison operators (`==`, `!=`, `<` and `>`) to compare the two strings. The `if __name__ == "__main__":` block is a standard convention in Python that makes a script executable from the command line, allowing us to test our function with different inputs.

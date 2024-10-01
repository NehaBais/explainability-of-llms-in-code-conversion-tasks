```
def print_match(possible_match: Optional[int]):
    if possible_match:
        print(f"Found match at pos {possible_match}")
    else:
        print("Did not find any matches")


def main():
    s1 = "abcd"
    s2 = "abab"
    s3 = "ab"
    
    # Determining if the first string starts with second string
    assert s1.startswith(s3)
    # Determining if the first string contains the second string at any location
    assert s1.find(s3) != -1
    print_match(s1.find(s3))  # Found match at pos 0
    print_match(s1.find(s2))  # Did not find any matches
    # Determining if the first string ends with the second string
    assert s2.endswith(s3)
```
Note: In Python, the `Optional` type is used to represent a value that may or may not be present. The `Option` in Rust corresponds to the `None` value in Python, and the `Some` value represents a present value.

Also, in Python, the `assert` statement is used for testing expressions at runtime and will raise an `AssertionError` if the expression evaluates to false. In contrast, Rust's `assert!` macro is similar but it also allows for a custom error message to be specified.

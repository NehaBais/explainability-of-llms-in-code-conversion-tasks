 Sure, here is the equivalent Python code for the given Rust code:

```python
def print_match(possible_match):
    if possible_match is not None:
        print(f"Found match at pos {possible_match}")
    else:
        print("Did not find any matches")

# Determining if the first string starts with the second string
s1 = "abcd"
s2 = "abab"
s3 = "ab"
assert s1.startswith(s3), f"{s1} does not start with {s3}"

# Determining if the first string contains the second string at any location
assert s3 in s1, f"{s1} does not contain {s3}"
print_match(s1.find(s3))  # Found match at pos 0
print_match(s1.find(s2))  # Did not find any matches

# Determining if the first string ends with the second string
assert s2.endswith(s3), f"{s2} does not end with {s3}"
```

This Python code performs the same operations as the Rust code:
1. Checks if `s1` starts with `s3`.
2. Checks if `s1` contains `s3` at any location and prints the position of the match.
3. Checks if `s2` ends with `s3`.

The `print_match` function is defined to handle the output for string matching results, similar to how it was done in Rust.

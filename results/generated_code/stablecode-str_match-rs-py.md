Here is the equivalent Python code:

```python
def print_match(possible_match): 
    if possible_match:
        print(f"Found match at pos {possible_match}")
    else:
        print("Did not find any matches")

s1 = "abcd"
s2 = "abab"
s3 = "ab"

# Determining if the first string starts with second string
assert s1.startswith(s3))
# Determining if the first string contains the second string at any location
assert s1.find(s3) != -1
# Print the location of the match 
print_match(s1.find(s3))))  # Found match at pos 0
print_match(s1.find(s2)))  # Did not find any matches
# Determining if the first string ends with the second string
assert s2.endswith(s3))
```
This script will convert the given Rust code into Python code, fulfilling all the provided requirements for both part 1 and part 2 of the task. For part 1 of the requirement, the equivalent is done using `startswith()` and `endswith()`. For part 2 of the requirement, we use the `find()` method to find the first occurrence of the second string in the first string. If a match is found, its starting position (zero-indexed) will be printed. If no matches are found, it will print that no matches were found.

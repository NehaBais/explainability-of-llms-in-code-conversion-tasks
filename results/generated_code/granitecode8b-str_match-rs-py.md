Here's the converted code from Rust to Python that demonstrates the three types of string matching as required:
```python
def print_match(possible_match):
 if possible_match is not None:
 print("Found match at pos", possible_match)
 else:
 print("Did not find any matches")
 
s1 = "abcd"
s2 = "abab"
s3 = "ab"
# Determining if the first string starts with second string
assert s1.startswith(s3)
# Determining if the first string contains the second string at any location
print_match(s1.find(s3)) # Found match at pos 0
# Print the location of the match for part 2
print_match(s1.find(s2)) # Did not find any matches
# Determining if the first string ends with the second string
assert s2.endswith(s3)
```
The `print_match()` function is used to print the location of a match or indicate that no matches were found. In Python, the `find()` method returns the index of the first occurrence of a substring in a string, and if the substring is not found, it returns `-1`. The `startswith()`, `endswith()`, and `contains()` methods are used to check for string matching as required.


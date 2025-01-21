The equivalent code in Python would look like this:

```python
def contains(string, substring):
    return substring in string

def starts_with(string, substring):
    return string.startswith(substring)

def ends_with(string, substring):
    return string.endswith(substring)

s1 = "abcd"
s2 = "abab"
s3 = "ab"

# Determining if the first string starts with second string
print(starts_with(s1, s3))  # True
# Determining if the first string contains the second string at any location
print(contains(s1, s3))   # False
# Print the location of the match 
match_pos = s1.find(s3)
if match_pos is not None:
    print(f"Found match at pos {match_pos}")
else:
    print("Did not find any matches")
# Determining if the first string ends with the second string
print(ends_with(s2, s3))   # True
```
This Python code does essentially what your Rust code does in terms of matching strings. It includes functions to check if a string starts with or ends with another string, and it uses Python's built-in `startswith` and `endswith` methods for these checks. The `find` method is used to find the location of the first occurrence of the substring within the string. If no match is found, `find` returns `None`, so we check if this is the case using a conditional statement.

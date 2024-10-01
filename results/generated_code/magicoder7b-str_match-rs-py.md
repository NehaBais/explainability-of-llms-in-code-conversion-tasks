 Here is the equivalent Python code for your Rust program:

```python
def print_match(possible_match):
    if possible_match != -1:
        print("Found match at pos {}".format(possible_match))
    else:
        print("Did not find any matches")
        
s1 = "abcd"
s2 = "abab"
s3 = "ab"

# Determining if the first string starts with second string
assert s1.startswith(s3)

# Determining if the first string contains the second string at any location
assert s1.find(s3) != -1 or s1.find(s2) == -1

# Print the location of the match 
print_match(s1.find(s3)) # Found match at pos 0
print_match(s1.find(s2)) # Did not find any matches

# Determining if the first string ends with the second string
assert s2.endswith(s3)
```
Please note that:
- `assert` in Python is a statement used to assert conditions, it is commonly used for debugging and testing purposes. 
- Python's `startswith()` method checks whether a string starts with another string or not. 
- Python's `find()` method returns the lowest index of substring (if found), otherwise return -1.
- Python's `endswith()` method is used to check if a string ends with a specified value.

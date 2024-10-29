The Python version of your code would look like this:

```python
def print_match(possible_match):
    if possible_match is not None:
        print("Found match at pos {}".format(possible_match))
    else:
        print("Did not find any matches")

s1 = "abcd"
s2 = "abab"
s3 = "ab"
  
# Determining if the first string starts with second string
assert s1.startswith(s3)
# Determining if the first string contains the second string at any location
assert s3 in s1
# Print the location of the match 
print_match(s1.find(s3))  # Found match at pos 0
print_match(s1.find(s2))  # Did not find any matches
# Determining if the first string ends with the second string
assert s2.endswith(s3)
```
This Python code works in a similar way to your Rust code. It uses Python's built-in string methods for matching and also checks that the strings start/contain/end as expected. The find() method returns the lowest index of the substring (if found). If not found, it returns -1 which is treated as None in python. Therefore print_match function can handle both scenarios.


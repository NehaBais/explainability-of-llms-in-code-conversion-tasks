Sure, here is the equivalent Python code for the given C++ code -

```python
# Python 3.x Code:
import re

# Initializing strings
s1 = "abcd"
s2 = "abab"
s3 = "ab"

def startswith(s1, s3):
    return s1.startswith(s3)

def contains(s1, s2):
    return s1.find(s2) != -1

def ends_with(s1, s3):
    return s1.endswith(s3)

# print startswith result of s1 and s3
print(startswith(s1, s3))  

# print contains result of s1 and s2
print(contains(s1, s2))  

# print ends_with result of s1 and s3
print(ends_with(s1, s3)) 
```

In the Python code, we used `startswith` function to check if the string starts with the specified substring. `find` function is used to find the index at which a specified value can be found within another string and returns -1 when it's not found. The endswith function checks if the given string ends with the specified ending. 
Note that we are using Python's native regular expression capabilities for substring searching, so the `find` method will return a number indicating the position of the match (0 is the first character, -1 means it wasn't found at all). 
The above code only covers one instance and not multiple occurrences in string for part 2. If you want to handle multiple occurrences of a substring in a given string, consider using Python's `re` module.

Sure! Here's the Python code that performs the same task as the C++ code you provided:
```python
s1 = "abcd"
s2 = "abab"
s3 = "ab"
# Beginning
print(s1.startswith(s3))
# End
print(s1.endswith(s3))
# Anywhere
print(s2.find(s3) != -1)
if s2.find(s3) != -1:
 print("Location of match:", s2.find(s3))
 loc = s2.find(s3)
 while s2.find(s3, loc + 1) != -1:
 print("Location of next match:", s2.find(s3, loc + 1))
 loc += 1
```
This code uses the `startswith()`, `endswith()`, and `find()` methods on strings to determine whether the first string starts with, ends with, or contains a substring from the second string. The `find()` method returns the index of the first occurrence of the substring in the second string, or -1 if the substring is not found.
The code also handles multiple occurrences of the substring by using a while loop to keep track of the last location where the substring was found and searching for the next occurrence after that. The `loc` variable keeps track of the last location where the substring was found, and the while loop increments it by 1 each time a new match is found.


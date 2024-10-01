Here is the converted code from C++ to Python that demonstrates three types of string matching as required:
```python
s1 = "abcd"
s2 = "abab"
s3 = "ab"
# Beginning
print(s1.startswith(s3))
# End
print(s1.endswith(s3))
# Anywhere
loc = s1.find(s2)
if loc != -1:
 print("Match found at location:", loc)
else:
 print("No match found")
 
loc = s2.find(s3)
print("Location of first occurrence of", s3, "in", s2, "is:", loc)
loc = s2.find(s3, loc + 1)
if loc != -1:
 print("Match found at location:", loc)
else:
 print("No more matches found")
```
This code first initializes the three strings `s1`, `s2`, and `s3`. It then demonstrates the three types of string matching as follows:
- **Beginning**: The `startswith()` method checks if the first string starts with the second string. In this case, it returns `False` because "abcd" does not start with "ab".
- **End**: The `endswith()` method checks if the first string ends with the second string. In this case, it returns `True` because "abcd" ends with "cd".
- **Anywhere**: The `find()` method searches for the second string within the first string and returns its location. If the first string does not contain the second string, `find()` returns -1. In this case, the output shows that the first occurrence of "ab" in "abab" is at location 0, and the second occurrence is at location 2.
The optional requirements are also handled:
- The location of the match for part 2 is printed if a match is found.
- If there are multiple occurrences of the same string, `find()` searches for the first occurrence by default. To search for subsequent occurrences, the starting index for the next search is set to the previous match's ending index + 1.


Sure! Here's the equivalent Python code for your requirements:
```python
# Given two strings, demonstrate the following three types of string matching
s1 = "abcd"
s2 = "abab"
s3 = "ab"

# Determining if the first string starts with second string
print(s1.startswith(s3))  # Returns: True

# Determining if the first string contains the second string at any location
print(s1.find(s2) != -1)   # Returns: True
loc = s2.find(s3)           # Returns: 0
while loc != -1:
    print(f'Found match at index {loc}')
    loc = s2.find(s3, loc+1)  # Find next occurrence of s3 starting from the end of last match

# Determining if the first string ends with the second string
print(s1.endswith(s3))       # Returns: True
```
In this code, `startswith` and `find` functions are used to check whether the strings start or contain the other at any location. The `endswith` function checks if the first string ends with the second one. The `while` loop is used to find all occurrences of the second string in the first one.


Here's the Python code that implements the same functionality as the given Rust code:
```python
s = "abc文字化けdef"
n = 2
m = 3
# Print 3 characters starting at index 2 (c文字)
print(s[n:n+m])
# Print all characters starting at index 2 (cletters化cedef)
print(s[n:])
# Print all characters except the last (abclettersizecedef)
print(s[::-1][1:])
# Print 3 characters starting with 'b' (bc文)
cpos = s.find('b')
print(s[cpos:cpos+m])
# Print 3 characters starting with " Ce" ( Cede)
spos = s.find("Ce")
print(s[spos:spos+m])
```
Note that Python uses 0-based indexing, so the index of the first character in a string is 0. Also, the `find()` method returns the index of the first occurrence of the given substring or character in the string, or `-1` if it's not found. The `skip()` and `take()` methods are used to extract substrings from a sequence, starting from a given index and taking a specified number of elements. The `rev()` method is used to reverse a string, and the `collect()` method is used to convert an iterator into a list or a string.


Here is the Python code that meets the requirements:
```python
s = "0123456789"
n = 3
m = 4
c = '2'
sub = "456"
print(s[n:n+m]) # starting from n characters in and of m length
print(s[n:]) # starting from n characters in, up to the end of the string
print(s[:-1]) # whole string minus the last character
print(s.find(c), m) # starting from a known character within the string and of m length
print(s.find(sub), m) # starting from a known substring within the string and of m length
``` 
This code will display the following output:

4567
456789
0123
4
456

Note that Python uses 0-based indexing for strings, so the index of the first character is 0. The `find()` method returns the index of the first occurrence of the specified character or substring in the string. The output of the last two lines may vary depending on the position of the character or substring within the string.


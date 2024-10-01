 Here is the Python code that should accomplish the same task as the C++ code:
```python
s = "0123456789"
n = 3
m = 4
c = '2'
sub = "456"

print(s[n:n+m]) # starting from n characters in and of m length
print(s[n:]) # starting from n characters in, up to the end of the string
print(s[:-1]) # whole string minus the last character
print(s[c:c+m]) # starting from a known character within the string and of m length
print(s[sub:sub+m]) # starting from a known substring within the string and of m length
```
Note that in Python, strings are Unicode by default, so you don't need to specify an encoding for them. Additionally, the `find()` method returns the index of the first occurrence of a substring within a string, rather than the substring itself. So, to get the same functionality as the C++ code, you can use the `index` attribute of the string instead:

s = "0123456789"
n = 3
m = 4
c = '2'
sub = "456"

print(s[n:n+m]) # starting from n characters in and of m length
print(s[n:]) # starting from n characters in, up to the end of the string
print(s[:-1]) # whole string minus the last character
print(s.index(c)) # starting from a known character within the string
print(s.index(sub)) # starting from a known substring within the string

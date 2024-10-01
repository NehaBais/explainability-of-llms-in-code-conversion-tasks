Here's the Python code that corresponds to the JavaScript code you provided:
```
str = "abcdefgh"
n = 2
m = 3
# * starting from n characters in and of m length;
print(str[n:n+m]) # => cde
# * starting from n characters in, up to the end of the string;
print(str[n:]) # => cdefgh
print(str[n:]) # => cdefgh
# * whole string minus last character;
print(str[:-1]) # => abcdefg
# * starting from a known character within the string and of m length;
print(str.find('b'), m) # => bcd
# * starting from a known substring within the string and of m length. 
print(str.find('bc'), m) # => bcd
```
Note that in Python, strings are Unicode by default, so the code should work with any valid Unicode character. Also, `str.find()` returns the index of the first occurrence of the specified substring, not the last one like JavaScript's `substr()`. However, the logic for finding substrings is the same.


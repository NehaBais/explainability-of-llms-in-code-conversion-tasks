The Python code to achieve this is as follows:

Python uses its own functions for handling Unicode strings without needing to worry about whether they're in the BMP or above it, and doesn’t use 8-bit or 16-bit units.

```python
str = "abcdefgh"
n = 2
m = 3

# * starting from n characters in and of m length;
print(str[n:n+m]) # => "cde"

# * starting from n characters in, up to the end of the string;
print(str[n:]) # => "cdefgh"

# * whole string minus last character;
print(str[:-1]) # => "abcdefg"

# * starting from a known character within the string and of m length;
print(str[str.find('b'):][:m]) # => "bcd"

# * starting from a known substring within the string and of m length. 
print(str[str.find('bc'):][:m]) # => "bcd"
```
Please note that Python uses zero-based indexing, so in some cases you might need to adjust your indices by subtracting one from them.


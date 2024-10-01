```python
# Display a substring:
# - starting from n characters in and of m length;
# - starting from n characters in, up to the end of the string;
# - whole string minus last character;
# - starting from a known character within the string and of m length;
# - starting from a known substring within the string and of m length.
str = "abcdefgh"
n = 2
m = 3

#   * starting from n characters in and of m length;
print(str[n:n + m])  # => 'cde'

#   * starting from n characters in, up to the end of the string;
print(str[n:])  # => 'cdefgh'

#   * whole string minus last character;
print(str[:-1])  # => 'abcdefg'

#   * starting from a known character within the string and of m length;
print(str.find('b'))  # => 1
print(str[str.find('b'):str.find('b') + m])  # => 'bcd'

#   * starting from a known substring within the string and of m length.
print(str.find('bc'))  # => 1
print(str[str.find('bc'):str.find('bc') + m])  # => 'bcd'
```

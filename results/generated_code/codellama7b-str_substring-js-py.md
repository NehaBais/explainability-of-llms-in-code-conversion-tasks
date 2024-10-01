In Python, you can use the `substring()` method to achieve the same functionality as the JavaScript code. Here is the equivalent Python code for each of the given examples:

```python
str = "abcdefgh"
n = 2
m = 3
print(str[n:n+m])  # => "cde"

str = "abcdefgh"
n = 2
print(str[n:])  # => "cdefgh"

str = "abcdefgh"
print(str[:-1])  # => "abcdefg"

str = "abcdefgh"
known_char = 'b'
m = 3
print(str[str.index(known_char):str.index(known_char)+m])  # => "bcd"

str = "abcdefgh"
known_substring = 'bc'
m = 3
print(str[str.index(known_substring):str.index(known_substring)+m])  # => "bcd"
```
Note that in Python, the `index()` method returns the index of the first occurrence of a substring within a string, and the `substr()` method extracts a substring from a string based on its start and end indices.

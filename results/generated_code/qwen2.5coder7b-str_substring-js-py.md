Sure, here is the Python equivalent code for the given JavaScript snippets:

```python
# Define the string
str = "abcdefgh"

# Define the indices and lengths
n = 2
m = 3

# * Starting from n characters in and of m length
print(str[n:n+m])  # => "cde"

# * Starting from n characters in, up to the end of the string
print(str[n:])  # => "cdefgh"

# * Whole string minus last character
print(str[:-1])  # => "abcdefg"

# * Starting from a known character within the string and of m length
start_index = str.index('b')
print(str[start_index:start_index+m])  # => "bcd"

# * Starting from a known substring within the string and of m length
start_index = str.index('bc')
print(str[start_index:start_index+m])  # => "bcd"
```

### Explanation:
- **`str[n:n+m]`:** Extracts a substring starting at index `n` with a length of `m`.
- **`str[n:]`:** Extracts the substring from index `n` to the end of the string.
- **`str[:-1]`:** Slices the string from the beginning up to but not including the last character.
- **`str.index('b')`:** Finds the index of the first occurrence of the character 'b'.
- **`str[start_index:start_index+m]`:** Extracts a substring starting at `start_index` with a length of `m`.

This code will work correctly for any valid Unicode code point, adhering to Python's handling of logical characters and strings.

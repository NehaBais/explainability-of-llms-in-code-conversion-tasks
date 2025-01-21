In Python, you can use slicing to achieve similar functionality. The `index()` method is used to find the first occurrence of a substring within a string.

Here's your code converted to Python:

```python
def substr(string, n, m):
    #  * starting from n characters in and of m length
    return string[n:n+m]

    #  * starting from n characters in, up to the end of the string
    return string[n:]

    #  * whole string minus last character
    return string[:-1]

    #  * starting from a known character within the string and of m length
    index = string.index('b')
    return string[index:index+m]

    #  * starting from a known substring within the string and of m length
    index = string.find('bc')
    return string[index:index+m]

# test cases
str = "abcdefgh"
n = 2
m = 3

print(substr(str, n, m))        # => 'cde'
print(substr(str, n))         # => 'cdefgh'
print(substr(str, n))         # => 'cdefgh'
print(substr(str, 0, len(str) - 1))    # => 'abcdefg'
print(substr(str, str.index('b'), m))        # => 'bcd'
print(substr(str, str.find('bc'), m))        # => 'bcd'
```

In this code:
- `str[n:n+m]` gives a substring starting from index `n` and having length `m`.
- `str[n:]` gives the substring starting from index `n` to the end of the string.
- `str[:-1]` removes the last character from the string.
- `string.index('b')` returns the index of the first occurrence of 'b' in the string, and `substr(string[index:index+m], m)` returns a substring starting at this index and having length `m`.
- `string.find('bc')` returns the index of the first occurrence of the substring 'bc', and `substr(string[index:index+m], m)` returns a substring starting at this index and having length `m`.

Sure! Here is the Python equivalent of your Java code:

```python
def substring_from_n_to_m(s: str, n: int, m: int) -> str:
    return s[n:n + m]

def substring_from_n_to_end(s: str, n: int) -> str:
    return s[n:]

def substring_except_last_char(s: str) -> str:
    return s[:-1]

def substring_from_char_to_m_chars(c: str, m: int, s: str) -> str:
    start = s.find(c)
    if start == -1:
        raise ValueError(f"Character '{c}' not found in string")
    return s[start:start + m + 1]

def substring_from_substring_to_m_chars(sub: str, m: int, s: str) -> str:
    start = s.find(sub)
    if start == -1:
        raise ValueError(f"Substring '{sub}' not found in string")
    return s[start:start + m + 1]
```

### Explanation:

- **substring_from_n_to_m**: This function takes a string `s`, an integer `n`, and another integer `m`. It returns the substring starting at index `n` with length `m`.
  
- **substring_from_n_to_end**: This function takes a string `s` and an integer `n`. It returns the substring starting at index `n` to the end of the string.
  
- **substring_except_last_char**: This function takes a string `s` and returns the substring from the start up to the second-to-last character.
  
- **substring_from_char_to_m_chars**: This function takes a character `c`, an integer `m`, and a string `s`. It finds the first occurrence of the character `c` in `s` and returns the substring starting at that index with length `m + 1`.
  
- **substring_from_substring_to_m_chars**: This function takes a substring `sub`, an integer `m`, and a string `s`. It finds the first occurrence of the substring `sub` in `s` and returns the substring starting at that index with length `m + 1`.

### Notes:
- The `find()` method is used to find the indices of the characters or substrings. If the character or substring is not found, a `ValueError` is raised.
- This Python code works with Unicode strings and handles logical characters (code points) as required.

You can use these functions in your Python programs to achieve the same functionality as your Java methods.

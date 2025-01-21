To convert the given C code to Python, we need to use Python's built-in string methods and handle Unicode correctly. Here is the Python equivalent of the provided C code:

```python
def substring(s: str, n: int, m: int) -> str:
    # Check for null s
    if not s:
        return None
    
    # Negative m to mean 'up to the mth char from right'
    if m < 0:
        m = len(s) + m - n + 1

    # n < 0 or m < 0 is invalid
    if n < 0 or m < 0:
        return None
    
    # Make sure string does not end before n and advance the "s" pointer to beginning of substring
    if len(s[:n]) != n:
        # String ends before n: invalid
        return None

    result = s[n:n+m]
    return result

def str_wholeless1(s: str) -> str:
    return substring(s, 0, len(s) - 1)

def str_fromch(s: str, ch: int) -> str:
    return substring(s, s.find(chr(ch)), 5)

def str_fromstr(s: str, in_str: str) -> str:
    return substring(s, s.find(in_str), 3)

def test(A):
    r = A()
    if r is None:
        print("--error--")
    else:
        print(r)
        del r

if __name__ == "__main__":
    s = "hello world shortest program"

    test(lambda: substring(s, 12, 5))       # get "short"
    test(lambda: substring(s, 6, -1))       # get "world shortest program"
    test(str_wholeless1)                   # "... progra"
    test(lambda: str_fromch(s, ord('w')))   # "world"
    test(lambda: str_fromstr(s, "ro"))     # "rog"
```

### Explanation:

1. **substring Function**:
   - This function takes a string `s`, an integer `n`, and another integer `m`.
   - It checks for null input and handles negative values of `m` by calculating the length from the right.
   - It ensures that the string is long enough to have `n` characters before slicing it.

2. **str_wholeless1 Function**:
   - This function returns the substring starting from the beginning up to the second-to-last character.

3. **str_fromch Function**:
   - This function finds the index of the first occurrence of a given character in the string and then extracts a substring of length 5 from that index.

4. **str_fromstr Function**:
   - This function finds the index of the first occurrence of a given substring in the string and then extracts a substring of length 3 from that index.

5. **test Function**:
   - This function is used to test each of the above functions and prints the result or an error message if the function returns `None`.

6. **Main Execution Block**:
   - The main block tests each function with specific inputs and prints the results.

This Python code handles Unicode correctly by using Python's built-in string methods, which naturally support Unicode characters.

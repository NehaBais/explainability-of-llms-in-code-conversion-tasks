The Python version of the code is as follows:

Python does not have a built-in function for dealing with substrings, however, you can use slicing to achieve similar results. For UTF-8/UTF-16 strings that are handled natively by Python (Python 3), the first three methods would be equivalent to Java's `substring`:
```python
def Substring(str, n, m):
    return str[n : n + m]
    
def Substring(str, n):
    return str[n:]

def Substring(str):
    return str[:-1]

def Substring(str, c, m):
    idx = str.index(c) if c in str else -1
    if idx != -1:  # character found
        return str[idx : idx + m]  
    else:         # character not found
        raise ValueError("Character not found in string")
    
def Substring(str, sub, m):
    idx = str.find(sub) if sub in str else -1
    if idx != -1:  # substring found
        return str[idx : idx + len(sub) + m]  
    else:         # substring not found
        raise ValueError("Substring not found in string")
```
Please note that Python's handling of UTF-8/UTF-16 strings is different than Java. The `str[n : n+m]` slicing method will correctly handle multi-byte characters (like those beyond the BMP) as long as you slice from a valid code point boundary, but it can be tricky with non-BMP characters and combining marks since they are composed of multiple code units.


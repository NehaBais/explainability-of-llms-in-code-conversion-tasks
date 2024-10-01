Below is the Python code equivalent to the given Java code:
```python
def startsWith(str1, str2):
    if len(str1) >= len(str2):
        return str1[:len(str2)] == str2
    else:
        return False


def endsWith(str1, str2):
    if len(str1) > len(str2):
        return str1[-len(str2):] == str2
    else:
        return False


def contains(str1, str2):
    return str2 in str1


def indexOf(str1, str2, start=0):
    if str2 not in str1 or len(str2) + start > len(str1):
        return -1
    else:
        index = str1.find(str2, start)
        return index


# Test cases:
print('"abcd".startsWith("ab") ->', startsWith("abcd", "ab"))  # returns true
print('"abcd".endsWith("zn") ->', endsWith("abcd", "zn"))  # returns false
print('"abab".contains("bb") ->', contains("abab", "bb"))  # returns false
print('"abab".contains("ab") ->', contains("abab", "ab"))  # returns true
print('indexOf("abab","bb") ->', indexOf("abab", "bb"))  # returns -1
print('indexOf("abab","ab") ->', indexOf("abab", "ab"))  # returns 0
print('indexOf("abab","ab",loc+1) ->', indexOf("abab", "ab", loc=2))  # returns 2
```
In this Python code, `startswith()`, `endswith()`, and `contains()` are implemented as simple string comparisons. The `indexOf` function is based on the built-in `find` method of strings. The optional parameter `start` is used to set an offset within the string where the search should start. It returns -1 if either the substring does not occur in the main string or the starting point is beyond the end of the main string.

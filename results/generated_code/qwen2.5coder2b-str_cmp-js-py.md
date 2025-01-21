In Python, string comparison is case sensitive by default. The order of alphabets is maintained for strings. Lexical ordering is not required in the language because it treats all characters as numbers and performs a numeric comparison.

Here is how you can write equivalent code in Python:

```python
def compare_strings(s1: str, s2: str) -> bool:
    return (s1 == s2) or (s1.lower() == s2.lower())

print(compare_strings("abcd", "abcd"))  # True
print(compare_strings("abcd", "dcba"))  # False
print(compare_strings("ABCD", "abcd"))  # False
print(compare_strings("123", "123"))  # True
print(compare_strings("123", "abc"))   # False
print(compare_strings("123", "123"))   # False
print(compare_strings("abcd".lower(), "abcd".lower()))    # True
```
The function `compare_strings` takes two strings and returns `True` if they are equal or if both are lower-case versions of each other, otherwise it returns `False`.

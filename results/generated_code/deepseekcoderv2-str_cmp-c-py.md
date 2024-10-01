## Python Code
```python
def str_eq(str1: str, str2: str) -> bool:
    '''Compare two strings for exact equality'''
    return str1 == str2

def str_ne(str1: str, str2: str) -> bool:
    '''Compare two strings for inequality (i.e., the inverse of exact equality)'''
    return not str_eq(str1, str2)

def str_gt(str1: str, str2: str) -> bool:
    '''Compare two strings to see if one is lexically ordered before than the other'''
    return str1 > str2

def str_lt(str1: str, str2: str) -> bool:
    '''Compare two strings to see if one is lexically ordered after than the other'''
    return str1 < str2

def str_ge(str1: str, str2: str) -> bool:
    '''Compare two strings to see if one is lexically ordered before or equal than the other'''
    return str1 >= str2

def str_le(str1: str, str2: str) -> bool:
    '''Compare two strings to see if one is lexically ordered after or equal than the other'''
    return str1 <= str2

def str_casecmp(str1: str, str2: str) -> int:
    '''Case-insensitive string comparison'''
    return -1 if str1.lower() < str2.lower() else 1 if str1.lower() > str2.lower() else 0

if __name__ == "__main__":
    test_strings = [("ball", "bell"), ("YUP", "YEP")]

    for s1, s2 in test_strings:
        print(f"{s1} {str_eq(s1, s2)}, {str_ne(s1, s2)}")
        print(f"{s1} {str_gt(s1, s2)}, {str_lt(s1, s2)}")
        print(f"{s1} {str_ge(s1, s2)}, {str_le(s1, s2)}")
```

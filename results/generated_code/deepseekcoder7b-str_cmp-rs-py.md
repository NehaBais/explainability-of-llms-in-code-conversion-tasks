In Python, the comparison of strings is done through built-in functions directly on string objects or by using methods. Here's how we can perform similar operations in python:

```python
# Comparing two strings for exact equality
a = "abc"
b = "ABC"
print(a == b)  # False, because Python is case sensitive.

# Comparing two strings for inequality (i.e., the inverse of exact equality)
print(a != b)  # True

# Comparing two strings to see if one is lexically ordered before than the other
c = "abc"
d = "ABC"
print(c < d)   # Python treats uppercase and lowercase letters differently. 
                # It considers 'A' as smaller than 'a'. Hence, True in this case.

# Comparing two strings to see if one is lexically ordered after than the other
e = "abc"
f = "ABC"
print(e > f)   # Python treats uppercase and lowercase letters differently. 
                # It considers 'A' as smaller than 'a'. Hence, False in this case.

# Case sensitive comparison
g = "Abc"
h = "abc"
print(g == h)  # False because they are of different cases.

# Case insensitive comparison
i = "Abc"
j = "abc"
print(i.lower() == j)  # True, using lower method to convert both strings into same case before comparing them.

# Comparisons with numeric strings:
k = "123"
l = "456"
print(k < l)   # True because lexical comparison is based on ASCII values of characters, 
                # and '1' has a smaller ASCII value than '4'.
```


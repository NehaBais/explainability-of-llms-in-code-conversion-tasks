# Python 3
```python
a = "abc"
b = "Bac".lower() # or .upper(), does not work on &str yet
if a == b: print("The strings are equal")
if a != b: print("The strings are not equal")
if a > b: print("The first string is lexically after the second")
if a < b: print("The first string is lexically before the second")
if a >= b: print("The first string is not lexically before the second")
if a <= b: print("The first string is not lexically after the second")
# case-insensitives
a.lower() == b # this avoids new allocations
```

```python
# String comparison in Python

a = "abc"
b = "Bac"

# Exact equality
if a == b:
    print("The strings are equal")

# Inequality
if a != b:
    print("The strings are not equal")

# Lexicographical comparison
if a > b:
    print("The first string is lexically after the second")
elif a < b:
    print("The first string is lexically before the second")

# Case-sensitive comparison
if a.lower() > b.lower():
    print("The first string is lexically after the second (case-sensitive)")
elif a.lower() < b.lower():
    print("The first string is lexically before the second (case-sensitive)")

# Case-insensitive comparison
if a.lower() == b.lower():
    print("Both strings are equal when ignoring case")

# Numeric string comparison
a = "10"
b = "5"

if a > b:
    print("The first string is numerically greater than the second")
elif a < b:
    print("The first string is numerically smaller than the second")
```

**Additional string comparisons:**

- `in`: Check if a substring is present in a string.
- `startswith`: Check if a string starts with a specific substring.
- `endswith`: Check if a string ends with a specific substring.
- `find`: Find the first occurrence of a substring in a string.
- `rfind`: Find the last occurrence of a substring in a string.
- `index`: Get the index of the first occurrence of a substring in a string.
- `rindex`: Get the index of the last occurrence of a substring in a string.

In Python, the `==` operator is used for exact string comparison while `!=` is used for inequality comparison. For lexicographic ordering of strings, Python's built-in `sorted()` function can be used.

Here's how you could write your code in Python:

```python
a = "abc"
b = "Bac"

# Exact equality
if a == b: 
    print("The strings are equal")

# Inequality comparison
if a != b: 
    print("The strings are not equal")

# Lexicographic order
if a > b:
    print("The first string is lexically after the second")
elif a < b:
    print("The first string is lexically before the second")

# Lexicographic order in reverse
if a >= b: 
    print("The first string is not lexically before the second")
elif a <= b:
    print("The first string is not lexically after the second")

# Case-insensitive equality using .upper() method for all strings
a2 = a.upper()
b2 = b.upper()

if a2 == b2: 
    print("Both strings are equal when ignoring case")

# Using sorted function to compare lexicographically
sorted_a = sorted(a)
sorted_b = sorted(b)

if sorted_a < sorted_b:
    print("The first string is lexically before the second")
elif sorted_a > sorted_b:
    print("The first string is lexically after the second")
```

Remember that Python's `sorted()` function sorts strings lexicographically. If you want to sort numbers as strings, you need to convert them to integers or floats first.

This solution also includes case-insensitive equality using the `.upper()` method on both strings. Note that in Python, comparing case-insensitively is not as straightforward as in Rust because it doesn't have built-in case-insensitive string comparison functions like Rust does.

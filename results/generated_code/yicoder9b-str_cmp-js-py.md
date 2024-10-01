In Python, string comparison is quite similar to JavaScript but also has some nice features like casefold method for case-insensitive comparisons and numerical comparison for numeric strings. 

Here's how you could convert the given code from JavaScript to Python:
```python
print(
    "abcd" == "abcd", # True
    "abcd" == "abcd", # True
    123 == 123,       # True
    123 == "123",     # False
    "ABCD" == "abcd", # False
    "ABCD" != "abcd", # True
    123 != 123,       # False
    123 != "123",     # True
    "abcd" < "dcba",  # True
    "abcd" > "dcba",  # False
    "ABCD".casefold() == "abcd".casefold() # True (case insensitive)
)
```

In Python, `==` checks for equality of values and `!=` checks for inequality while `<` and `>` check lexicographic order. Also, Python treats string comparison differently when it comes to numbers. It doesn't perform numerical comparisons like JavaScript does if the operands are not numeric strings.

If you want to compare numeric strings numerically in Python you would need to convert them first:

print(int('123') == 123) # True


In Python, the equivalent code would be:

```python
a = int(input('Enter first integer: '))
b = int(input('Enter second integer: '))

# sum
print('a+b =', a+b)

# difference
print('a-b =', a-b)

# product
print('a*b =', a*b)

# quotient and remainder
quotient = divmod(a, b)
print('a/b = {}, remainder {}'.format(quotient[0], quotient[1]))
```

This Python code does the same as your C++ one: it asks for two integers from user input, then calculates their sum, difference and product. For quotient, it uses Python's built-in `divmod` function which gives both the integer quotient and the remainder at once. The sign of the remainder is dependent on the sign of the second operand (same as C++ behavior).

The division operation in Python 3 performs "floor" division where round towards negative infinity, while Python's `//` operator performs true division that rounds towards zero. However, the way you would indicate this in a comment is dependent on your team/project standards and is not something inherent to the language or the code itself.

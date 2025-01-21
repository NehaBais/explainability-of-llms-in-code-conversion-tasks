 Here's the Python code that performs the same operations as your C++ code:

```python
# Get two integers from the user
a = int(input())
b = int(input())

# Display their sum, difference, product, integer quotient, and remainder
print("a+b =", a + b)
print("a-b =", a - b)
print("a*b =", a * b)
print("a/b (integer quotient) =", a // b, ", remainder =", a % b)
```

In Python, the `//` operator is used for integer division, which effectively gives the quotient rounded towards negative infinity, as specified. The `%` operator returns the remainder of the division, and its sign follows the sign of the divisor (`b`) if the dividend (`a`) and divisor are of different signs.

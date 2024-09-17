```python
# Get two integers from the user
a, b = map(int, input().split())

# Display their sum
print("a+b =", a+b)

# Display their difference
print("a-b =", a-b)

# Display their product
print("a*b =", a*b)

# Display integer quotient and remainder
print("a/b =", a//b, ", remainder", a%b)
```

This Python code does not handle any errors. It simply reads two integers from the user, performs arithmetic operations on them, and displays the results. The `//` operator is used to get the integer quotient, which rounds towards zero. The `%` operator is used to get the remainder, following the usual rules of division where the sign of the remainder matches the sign of the second operand when both are different.

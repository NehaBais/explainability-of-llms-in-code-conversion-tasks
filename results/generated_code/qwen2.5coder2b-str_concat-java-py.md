Sure, here is the equivalent Python code for your Java program:

```python
# Define the string variable 's'
s = "hello"

# Print the original variable concatenated with another string literal
print(f"{s} literal")

# Create a new string variable s2 by concatenating the original variable and another string literal
s2 = s + " literal"

# Print the newly created string variable s2
print(s2)
```

Explanation of each part:
- The `f-string` is used to format the output. The expression `{s} literal` inside the curly braces will be replaced by the value of `s`.
- The `+` operator is used for concatenation in Python, which creates a new string that is the result of joining two strings together.
- After defining both variables, they are printed using `print()`.

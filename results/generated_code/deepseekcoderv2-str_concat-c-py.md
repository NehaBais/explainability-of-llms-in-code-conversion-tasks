 Sure! Below is the equivalent Python code for the provided C code:

```python
def sconcat(s1, s2):
    return s1 + s2

# Create a string variable equal to any text value.
s = "hello"

# Print the content of the variables
print(f"{s} literal")
# Alternatively, using concatenation
print(f"{s}{' literal'}")

# Concatenate another string literal with the original variable and print it
s2 = sconcat(s, " literal")
print(s2)
```

This Python code does the following:
1. Defines a function `sconcat` that concatenates two strings.
2. Creates a string variable `s` equal to "hello".
3. Prints the content of the variables using formatted string literals.
4. Concatenates another string literal with the original variable and prints the result.

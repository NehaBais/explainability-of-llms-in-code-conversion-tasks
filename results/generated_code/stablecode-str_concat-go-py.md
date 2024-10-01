Here is the equivalent Python code:

```python
# text assigned to a string variable
s = "hello"

print(s)

print(s + " literal")

# concatenate variable and literal, assign result to another string variable
s2 = s + " literal"

print(s2)
```

In Python, we do not need to declare the type of a variable explicitly (like `var s string = "hello"` in Golang). The interpreter automatically determines the data type of the variable based on its value.

Also, unlike Golang, Python does not have a separate package for input/output operations (`fmt` package in Golang). Instead, we can use the built-in `print()` function to print output to the console.

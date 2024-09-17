In Python, you can use the built-in `input` function to get user input. Here is how the equivalent code would look in Python:

```python
# Get two integers from the user
a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))

print("sum:              ", a + b)
print("difference:       ", a - b)
print("product:          ", a * b)
print("integer quotient: ", a // b)  # truncates towards zero
print("remainder:        ", a % b)  # same sign as first operand
```

This Python code does not include error handling for simplicity. If the user enters something that cannot be converted to an integer, or if they divide by zero, this code will crash with an error. In a full application, you would want to handle these situations gracefully (i.e., with useful error messages). 

Also note that Python uses `//` for floor division (dividing and returning the largest possible integer), which rounds towards negative infinity in contrast to Rust's truncating behavior. This is because Python's rounding towards zero would give a different result than what you might expect from languages like Rust, where rounding is typically towards nearest even number. If this kind of rounding (towards zero) is needed, the operator `/` in Python does it.


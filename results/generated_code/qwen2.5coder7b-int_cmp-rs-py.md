Here's how you can convert the given Rust code to Python:
```python
# Get two integers from the user
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

# Display a message if the first integer is less than, equal to or greater than the second integer
if a < b:
    print(f"{a} is less than {b}")
elif a == b:
    print(f"{a} equals {b}")
else:
    print(f"{a} is greater than {b}")
```
This Python code does the same thing as the Rust code. It gets two integers from the user, then it compares them and prints out a message based on whether `a` is less than, equal to, or greater than `b`.

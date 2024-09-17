 Here's how you can convert the Rust code to Python:

```python
# Get two integers from the user.
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))

if a < b:
    print("{} is less than {}".format(a, b))
elif a == b:
    print("{} equals {}".format(a, b))
else:
    print("{} is greater than {}".format(a, b))
```
In this Python code snippet, the user is prompted to input two integers. These are then compared using if-elif-else conditionals that print a message based on whether `a` is less than, equal to or greater than `b`. The format method in the print statement formats the output string with the values of `a` and `b` at the required places.

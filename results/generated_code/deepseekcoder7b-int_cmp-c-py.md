Here's the equivalent Python code for your C program:

```python
# Get two integers from the user.
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))

# Display a message if the first integer is less than, equal to or greater than the second integer.
if a < b:
    print(f"{a} is less than {b}")

if a == b:
    print(f"{a} is equal to {b}")

if a > b:
    print(f"{a} is greater than {b}")
``` 
The `input()` function in Python allows you to get input from the user. The string inside the parentheses will be displayed as prompt. The `int()` function converts the input (which is by default a string) into an integer, which we can then compare with other integers using Python's comparison operators like `<`, `==` and `>`.


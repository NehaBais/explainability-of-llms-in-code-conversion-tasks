 In Python, you can use input() function to get integer inputs from the user. Here is how you could re-write the JavaScript functions in Python:

Python Code:

```python
def compare(a, b):
    if a == b:
        print(str(a) + " equals " + str(b))
    if a < b:
        print(str(a) + " is less than " + str(b))
    if a > b:
        print(str(a) + " is greater than " + str(b))

# Get two integers from the user.
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))
compare(a, b)
```

In this Python code:
- `input()` function is used to get integer inputs from users,
- `int()` is a built-in python function which converts the user's input into an integer.
- The `compare()` function checks for all three conditions specified in JavaScript. It also prints out the numbers as strings because python doesn't allow comparing different types of operands directly.

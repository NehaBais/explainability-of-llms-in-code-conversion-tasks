Here's how you can convert this JavaScript code to Python:

```python
def compare(a, b):
    if a == b:
        print(f"{a} equals {b}")
    elif a < b:
        print(f"{a} is less than {b}")
    elif a > b:
        print(f"{a} is greater than {b}")

# Get two integers from the user
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))

compare(a, b)
```
In Python, you can use `input()` to get input from a user and `int()` to convert it into an integer. The `print()` function is used for displaying text on the screen. Also, note that in Python, we don't have `elif` or `else if`. We just write `elif` after an `if`.

Here's the Python equivalent of your C++ code:

```python
try:
    a, b = map(int, input("Enter two integers separated by space: ").split())
except ValueError:
    print('Invalid input! Please enter only numbers.')
else: 
    if a < b:
        print(f'{a} is less than {b}.')
    elif a == b:
        print(f'{a} is equal to {b}.')
    else:
        print(f'{a} is greater than {b}.')
```
This Python code does the same thing as your C++ one. It prompts the user for two integers, checks which of them are less, equal or greater and prints out an appropriate message accordingly. If the user enters anything other than numbers, it will print a "Invalid input" message. The `try`-`except` block in Python is used to catch and handle exceptions that might be raised when trying to convert non-numeric strings into integers with `int()` function.


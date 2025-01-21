Here's how you can convert the given C++ code into Python:

```python
# Get two integers from user
try:
    a, b = map(int, input("Enter two numbers: ").split())
except ValueError:
    print("Could not read the numbers")
    exit(1)

# test for less-than
if a < b:
    print(f"{a} is less than {b}")

# test for equality
if a == b:
    print(f"{a} is equal to {b}")

# test for greater-than
if a > b:
    print(f"{a} is greater than {b}")
```

This Python code does the same thing as your C++ code. It will ask you to enter two numbers, then it will check if the first number is less than, equal to, or greater than the second number and print an appropriate message. If the input is not a valid number, it'll throw an error message and exit the program.

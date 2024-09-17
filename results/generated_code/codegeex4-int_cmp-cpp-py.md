```python
# Get two integers from the user
try:
    a = int(input("Enter first integer: "))
    b = int(input("Enter second integer: "))
except ValueError:
    print("could not read the numbers")
    exit(1)

# Test for less-than
if a < b:
    print(f"{a} is less than {b}")

# Test for equality
if a == b:
    print(f"{a} is equal to {b}")

# Test for greater-than
if a > b:
    print(f"{a} is greater than {b}")
```

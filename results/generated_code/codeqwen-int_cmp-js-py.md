Here's how you can convert this JavaScript code to Python:

First, let's write a function using type coercion to compare two integers.

Python:
```python
def compare(A, b):
    if A == b:
        print(f"{A} equals {b}")
    elif A < b:
        print(f"{A} is less than {b}")
    else:
        print(f"{A} is greater than {b}")

# Test the function for each case separately.
compare(5, 10)  # Outputs: 5 is less than 10
compare(10, 10) # Outputs: 10 equals 10
compare(15, 10) # Outputs: 15 is greater than 10
```

 Here's the equivalent Python code that performs the same operations as your C++ code:

```python
def main():
    try:
        # Get two integers from the user
        a = int(input("Enter the first integer: "))
        b = int(input("Enter the second integer: "))
    except ValueError:
        print("Invalid input. Please enter valid integers.")
        return

    # Test for less-than
    if a < b:
        print(f"{a} is less than {b}")

    # Test for equality
    if a == b:
        print(f"{a} is equal to {b}")

    # Test for greater-than
    if a > b:
        print(f"{a} is greater than {b}")

if __name__ == "__main__":
    main()
```

This Python code does the following:
1. Prompts the user to enter two integers.
2. Tries to read and convert these inputs into integers. If the conversion fails, it catches a `ValueError` and prints an error message.
3. Compares the two integers using the `<`, `==`, and `>` operators and prints messages based on the comparison results.

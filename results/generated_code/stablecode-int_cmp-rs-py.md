Here's your code converted from Rust to Python:

Python Code:
```python
import sys

def main():
    try:
        a = int(input("Enter first integer: ")))
        b = int(input("Enter second integer: ")))
    except ValueError:
        print("Invalid input. Please enter integers only.")
        sys.exit(1)

    if a < b:
        print(f"{a} is less than {b}")
    elif a == b:
        print(f"{a} equals {b}")
    else:
        print(f"{a} is greater than {b}")

if __name__ == "__main__":
    main()
```
This code will prompt the user to enter two integers. It then checks if the first integer is less than, equal to, or greater than the second integer. It displays the appropriate message based on the condition met.

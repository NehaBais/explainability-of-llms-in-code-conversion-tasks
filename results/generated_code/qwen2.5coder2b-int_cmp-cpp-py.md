```python
def main():
    try:
        a = int(input("Enter the first integer: "))
        b = int(input("Enter the second integer: "))
    except ValueError:
        print("Invalid input. Please enter integers.")
        return

    # test for less-than
    if a < b:
        print(f"{a} is less than {b}")

    # test for equality
    if a == b:
        print(f"{a} is equal to {b}")

    # test for greater-than
    if a > b:
        print(f"{a} is greater than {b}")

if __name__ == "__main__":
    main()
```

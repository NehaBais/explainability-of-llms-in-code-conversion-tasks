Here's the equivalent Python code:

```python
def comp_int():
    try:
        nbr1 = int(input("Enter the first integer: "))
        nbr2 = int(input("Enter the second integer: "))

        if nbr1 < nbr2:
            print(f"{nbr1} is less than {nbr2}")

        elif nbr1 > nbr2:
            print(f"{nbr1} is greater than {nbr2}")

        else:
            print(f"{nbr1} is equal to {nbr2}")

    except ValueError:
        print("Invalid input. Please enter integers only.")

comp_int()
```

This Python program does the same thing as your Java code. It reads two integers from the user and prints out whether they are less than, equal to or greater than each other. Note that in Python, we can use `elif` (else if) instead of multiple `else` blocks to make our code more readable. The `f-string` formatting allows us to embed variable values directly into the string.

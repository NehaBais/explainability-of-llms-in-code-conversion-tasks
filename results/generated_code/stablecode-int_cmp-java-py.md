Here's how you can convert the given Java code into Python:

```python
try:
    nbr1 = int(input())
    nbr2 = int(input())

    if nbr1 < nbr2:
        print(f"{nbr1} is less than {nbr2}")

    elif nbr1 > nbr2:
        print(f"{nbr1} is greater than {nbr2}")

    else:
        print(f"{nbr1} is equal to {nbr2}")

except IOError:
    pass
```

This Python code performs the same functionality as the given Java code. It prompts the user for two integers, compares them using if-elif-else conditions, and prints a message based on the comparison results. If an error occurs during input processing, it handles it gracefully by passing without any exception handling code.

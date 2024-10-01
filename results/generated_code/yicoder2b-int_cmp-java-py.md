The equivalent Python code for the given Java program would be:

```python
def compInt():
    try:
        # Get two integers from user input
        nbr1 = int(input())
        nbr2 = int(input())

        if nbr1 < nbr2:
            print(f"{nbr1} is less than {nbr2}")

        elif nbr1 > nbr2:
            print(f"{nbr1} is greater than {nbr2}")

        else:
            print(f"{nbr1} is equal to {nbr2}")
    except ValueError:  # In case of non-integer input
        print("Inputs must be integers!")
compInt()
```

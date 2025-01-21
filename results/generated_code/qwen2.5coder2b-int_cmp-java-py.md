Here's the equivalent Python code:

```python
import sys

def compInt():
    try:
        # Taking input from user
        nbr1 = int(input())
        nbr2 = int(input())

        if(nbr1 < nbr2):
            print(f"{nbr1} is less than {nbr2}")

        elif(nbr1 > nbr2):
            print(f"{nbr1} is greater than {nbr2}")

        else:
            print(f"{nbr1} is equal to {nbr2}")
    except ValueError:
        print("Please enter valid integers.")

if __name__ == "__main__":
    compInt()
```

This Python code does the same thing as your Java code. It prompts for two numbers from the user, and then it prints out a message based on whether each number is less than, greater than, or equal to the other one. If the input is not valid integers, it prints an error message.

The try-except block handles exceptions that may occur due to invalid inputs (e.g., if the user doesn't enter numbers).

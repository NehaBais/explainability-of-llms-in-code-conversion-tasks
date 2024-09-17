Sure, here's the Python code that achieves the same result:
```
import sys
try:
    nbr1 = int(input("Enter first integer: "))
    nbr2 = int(input("Enter second integer: "))

    if nbr1 < nbr2:
        print(nbr1, "is less than", nbr2)

    elif nbr1 == nbr2:
        print(nbr1, "is equal to", nbr2)

    else:
        print(nbr1, "is greater than", nbr2)
except (ValueError, TypeError):
    print("Invalid input. Please enter integers.")
```
This code uses the `input()` function to get user input from the console, and then uses an `if-elif-else` statement to check if the first integer is less than, equal to, or greater than the second integer. The conditions for each case are checked using the appropriate comparison operators (`<`, `==`, and `>`).


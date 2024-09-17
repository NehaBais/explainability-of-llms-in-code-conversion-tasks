```python
from sys import stdin

try:
    nbr1 = int(stdin.readline())
    nbr2 = int(stdin.readline())

    if nbr1 < nbr2:
        print(f"{nbr1} is less than {nbr2}")

    elif nbr1 > nbr2:
        print(f"{nbr1} is greater than {nbr2}")

    else:
        print(f"{nbr1} is equal to {nbr2}")

except ValueError:
    print("Invalid input. Please enter integers.")
```

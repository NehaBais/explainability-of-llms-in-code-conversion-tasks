Answer:
```python
import sys

# Get two integers from the user
nbr1 = int(sys.stdin.readline())
nbr2 = int(sys.stdin.readline())

# Check if nbr1 is less than nbr2
if (nbr1 < nbr2):
    print(f"{nbr1} is less than {nbr2}")

# Check if nbr1 is greater than nbr2
elif (nbr1 > nbr2):
    print(f"{nbr1} is greater than {nbr2}")

# If neither of the above conditions are true, then nbr1 and nbr2 must be equal
else:
    print(f"{nbr1} is equal to {nbr2}")
```

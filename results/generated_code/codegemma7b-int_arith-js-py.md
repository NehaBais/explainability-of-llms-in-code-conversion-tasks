```python
import sys

# Get two integers from the command line arguments
a = int(sys.argv[1])
b = int(sys.argv[2])

# Calculate the operations
sum = a + b
difference = a - b
product = a * b
division = a // b  # Integer division, rounds towards zero
remainder = a % b  # Remainder, sign matches the sign of 'a'

# Print the results
print('a + b = {}'.format(sum))
print('a - b = {}'.format(difference))
print('a * b = {}'.format(product))
print('a / b = {}'.format(division))
print('a % b = {}'.format(remainder))
```

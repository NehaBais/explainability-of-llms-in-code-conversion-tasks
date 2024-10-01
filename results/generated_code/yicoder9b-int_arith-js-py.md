In Python:

```python
# Get two integers from the user
import sys
a = int(sys.argv[1])  # Convert to an integer
b = int(sys.argv[2])  # Convert to an integer

sum = a + b 
difference = a - b 
product = a * b 
quotient = a // b # The '//' operator performs floor division which rounds towards negative infinity
remainder = a % b # This produces the remainder after dividing 'b' into 'a'. Python's '%' operator always return a number with the same sign as the divisor (or zero)
exponentiation = a ** b  # The '**' operator performs exponentiation

print('a + b = {}'.format(sum)) # The {} is a placeholder that is replaced by the sum
print('a - b = {}'.format(difference)) 
print('a * b = {}'.format(product)) 
print('a // b = {}'.format(quotient))  # Note: This rounds towards negative infinity
print('a % b = {}'.format(remainder)) # The sign is the same as the divisor (or zero) in Python
print('a ** b = {}'.format(exponentiation)) 
```

Here is the equivalent Python code for your Java program:

```python
# Get two integers from user
a = int(input("Enter the first integer:\n"))
b = int(input("Enter the second integer:\n"))

sum_result = a + b               # The result of adding 'a' and 'b' 
difference = a - b                # The result of subtracting 'b' from 'a'
product = a * b                  # The result of multiplying 'a' and 'b'
division = a // b                 # The result of dividing 'a' by 'b' (Note: '//' operator discards the fractional result)
remainder = a % b                # The remainder of dividing 'a' by 'b'
exponentiation = pow(a, b)       # a raised to power b

# Print out results
print("{} + {} = {}".format(a, b, sum_result))
print("{} - {} = {}".format(a, b, difference))
print("{} * {} = {}".format(a, b, product))
if a < b:  # If a<b then the division is towards negative infinity
    print("quotient of {} / {} = {} (rounds towards negative infinity)".format(a, b, division))  
else:      # Otherwise it rounds towards zero.
    print("quotient of {} / {} = {} (rounds towards zero)".format(a, b, division)) 
print("remainder of {} / {} = {} with the same sign as first operand i.e., '{}'".format(a, b, remainder, a if remainder >= 0 else b))  
```
For quotient in Python, it rounds towards zero when the dividend is less than the divisor and towards negative infinity otherwise, this matches common rounding rules for division operation. The `pow()` function raises the first argument to power of the second one. In python % operator gives remainder even for float numbers whereas Java does not support floating point modulus operations.


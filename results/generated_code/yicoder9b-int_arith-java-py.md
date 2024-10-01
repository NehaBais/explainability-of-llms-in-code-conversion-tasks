The equivalent Python code for the given Java program would be:

```python
a = int(input())
b = int(input())

summation = a + b  # The result of adding 'a' and 'b'
difference = a - b  # The result of subtracting 'b' from 'a'
product = a * b  # The result of multiplying 'a' and 'b'
division = a // b  # The result of dividing 'a' by 'b' (Note: 'division' does not contain the fractional result)
remainder = a % b  # The remainder of dividing 'a' by 'b'
exponentiation = a ** b # The value of 'a' raised to the power of 'b'

print("a + b = {}".format(summation))
print("a - b = {}".format(difference))
print("a * b = {}".format(product))
print("quotient of a / b = {}".format(division))  # truncates towards 0
print("remainder of a / b = {}".format(remainder))  # same sign as first operand
print("a ** b = {}".format(exponentiation)) # exponentiation result
```

Note: In Python, integer division `//` always rounds down to the nearest whole number, which is equivalent to rounding towards negative infinity. Also note that the remainder operator `%` in Python returns a result with the same sign as the dividend (the first operand).

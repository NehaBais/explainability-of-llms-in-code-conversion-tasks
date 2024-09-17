Here is the equivalent Python code:

```python
a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))

sum = A + b        # The result of adding 'A' and 'b'
difference = A - b # The result of subtracting 'b' from 'A'
product = A * b    # The result of multiplying 'A' and 'b'
division = A / b    # The result of dividing 'A' by 'b' (Note: 'division' does not contain the fractional result)
remainder = A % b   # The remainder of dividing 'A' by 'b'

print("A + b = ", sum)
print("A - b = ", difference)
print("A * b = ", product)
print("quotient of a / b = ", int(division))  # truncates towards 0
print("remainder of a / b = ", remainder)     # same sign as first operand
```

In Python, there's no need for the type casting to an integer or float in the output statements. The division operator `/` results in a floating point number by default, which is what we want here.

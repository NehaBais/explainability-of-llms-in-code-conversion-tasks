```python
# Get the 2 numbers from command line arguments
a = int(input())
b = int(input())

sum_ab = a + b     # The result of adding 'a' and 'b'
difference_ab = a - b  # The result of subtracting 'b' from 'a'
product_ab = a * b    # The result of multiplying 'a' and 'b'
division_ab = a // b   # The integer quotient of dividing 'a' by 'b' (truncates towards zero)
remainder_ab = a % b  # The remainder of dividing 'a' by 'b'

print("a + b =", sum_ab)
print("a - b =", difference_ab)
print("a * b =", product_ab)
print("quotient of a // b =", division_ab)   # truncates towards zero
print("remainder of a % b =", remainder_ab)   # same sign as the first operand if they are different, otherwise 0.
```

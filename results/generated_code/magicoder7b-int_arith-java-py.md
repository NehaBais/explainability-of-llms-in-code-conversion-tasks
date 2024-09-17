 Here is the equivalent Python code for your Java program:

```python
# Get two integers from user inputs
a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))

sum_ab = a + b     # The sum of 'a' and 'b'
difference_ab = a - b  # The difference between 'a' and 'b'
product_ab = a * b   # The product of 'a' and 'b'
division_ab = a // b   # The integer quotient of 'a' divided by 'b' (Note: '//' operator for integer division)
remainder_ab = a % b  # The remainder when 'a' is divided by 'b'

# Display the results
print("The sum of {} and {} is {}.",format(a, b, sum_ab))
print("The difference between {} and {} is {}.",format(a, b, difference_ab))
print("The product of {} and {} is {}.",format(a, b, product_ab))
print("The integer quotient of {} divided by {} is {}.",format(a, b, division_ab))   # truncates towards 0
print("The remainder when {} is divided by {} is {}.",format(a, b, remainder_ab))
```
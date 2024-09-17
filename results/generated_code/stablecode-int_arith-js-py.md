Here is the Python equivalent of your JavaScript code:

```python
import sys

# Get two integers from the user
print("Enter first integer:")
a = int(input())

print("Enter second integer:")
b = int(input())

# Display their sum, difference, product, quotient and remainder.
sum_ab = a + b
difference_ab = a - b
product_ab = a * b
quotient_ab = a // b  # Using floor division here
remainder_ab = a % b
exponentiation_ab = a ** b  # '**' operator is used for exponentiation in Python

print(f"a + b = {sum_ab}")
print(f"a - b = {difference_ab}")
print(f"a * b = {product_ab}")
print(f"a / b = {quotient_ab}")
print(f"a % b = {remainder_ab}")
```
Please note that the print statements in Python are formatted using f-strings. If you want to display sum, difference etc in a more readable format, you can replace `print(f"{variable} ... ))"` with `print("{} {} ...".format(a, b)))`. This will give you more space between each variable and their respective value.
```python
sum_ab = a + b
difference_ab = a - b
product_ab = a * b
quotient_ab = a // b  # Using floor division here
remainder_ab = a % b
exponentiation_ab = a ** b  # '**' operator is used for exponentiation in Python

print("a + b =", sum_ab)
print("a - b =", difference_ab)
print("a * b =", product_ab)
print("a / b =", quotient_ab)
print("a % b =", remainder_ab)
```

Sure, here is the equivalent Python code:

```python
# Get two integers from the user
a = int(input())
b = int(input())

# Display their sum, difference, product and integer quotient
print("a+b = ", a + b)
print("a-b = ", a - b)
print("a*b = ", a * b)

try: 
    quotient = a // b # floor division in python
except ZeroDivisionError: 
    quotient = "undefined"

# Display the remainder, sign of first operand and second operand if they are different
remainder = a % b 
first_operand_sign = "-" if a < 0 else "+"
second_operand_sign = "-" if b < 0 else "+"

print("a/b = ", a / b)
print("a%b = ", remainder)
print("Sign of first operand: ", first_operand_sign)
print("Sign of second operand: ", second_operand_sign)
```
Just input two numbers when asked, and this will print out the sum, difference, product and integer quotient of those two numbers.
It also calculates the remainder and the sign of the first and second operands.

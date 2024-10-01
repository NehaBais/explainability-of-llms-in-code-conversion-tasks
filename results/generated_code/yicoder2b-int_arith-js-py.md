Sure, here is the equivalent Python code for the given JavaScript function:

```python
# Invoked as python script.py <a> <b>
import sys

a = int(sys.argv[1])
b = int(sys.argv[2])

sum_result = a + b
difference_result = a - b
product_result = a * b
division_result = round(a / b)  # Python's 'round' function rounds towards zero by default
remainder_result = a % b  # This computes the remainder of 'b' divided into 'a'. The '%' operator is the modulo operator in python
sign_match = -1 if (a * b < 0) else 1

print('Sum: ', sum_result)
print('Difference: ', difference_result)
print('Product: ', product_result)
print('Quotient: ', division_result)
print('Remainder: ', remainder_result)
if a * b < 0 and remainder_result * sign_match > 0 :
    print('Sign of remainder matches the signs of operands')
else:
    print('Signs of remainder and operands do not match')
```
Note that in Python, we use round() to get the quotient with a specific rounding method (towards zero by default). We also use sys.argv for command-line input, which is equivalent to JavaScript's process.argv.

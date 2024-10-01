Sure, here is the equivalent Python code for the given C++ code -

```python
# Get two integers from user
a = int(input('Enter first integer: '))
b = int(input('Enter second integer: '))

# Display their operations 
print("Sum = ", a+b)
print("Difference = ", a-b)
print("Product = ", a*b)
print("Quotient = ", a/b if b != 0 else 'undefined', "remainder ", a%b if b != 0 else 'undefined') # If denominator is zero
```
This code does not handle errors such as division by zero or converting non-integer inputs to integers. You can add error handling for this purpose depending on your needs.

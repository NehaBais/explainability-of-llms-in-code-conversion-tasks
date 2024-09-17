Here is the Python equivalent of your JavaScript code, without considering "rounds" for quotient and "sign of operands" for the remainder because these concepts are very specific to programming languages and don't have a standard definition in most of them. However, if you want to implement rounding behavior or check whether the sign of the first operand or second one matches the result (remainder), it would require additional logic:

```python
import sys

a = int(sys.argv[1])  # get first integer from command line arguments
b = int(sys.argv[2])  # get second integer from command line arguments

sum_ab = a + b  
difference = a - b  
product = a * b  
division = a / b if b != 0 else "undefined"   # Checking for zero division error  
remainder = a % b if b != 0 else "undefined"  # Checking for zero division error 

print(f'a + b = {sum_ab}')   
print(f'a - b = {difference}')   
print(f'a * b = {product}')  
print(f'a / b = {division}')     # Prints "undefined" if divided by zero 
print(f'a % b = {remainder}')    # Prints "undefined" if divided by zero
```

To run this code, save it in a file (for example script.py), then use the command line like so: `python3 script.py <first_integer> <second_integer>` replacing first_integer and second_integer with actual integers. 

This Python version also checks for zero division error by checking if b is not equal to zero before performing division or modulo operation. If it's zero, the result will be "undefined" which can also be interpreted as a mathematical concept in some situations (like `12/0` in this case). However, this interpretation might vary depending on your specific needs.


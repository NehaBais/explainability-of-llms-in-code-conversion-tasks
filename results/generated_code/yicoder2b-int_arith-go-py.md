This is the Python equivalent of your Golang code. Note that Python handles error handling differently than Go:
```python
import math 

def main(): 
    a, b = map(int, input('Enter two integers: ').split())  # Get integers from user
    print(f'{a} + {b} = {a+b}\n')
    print(f'{a} - {b} = {a-b}\n')
    print(f'{a} * {b} = {a*b}\n')
    print(f'{a} / {b} = {a/b}\n')  # Rounds towards 0
    if (a < 0) ^ (b < 0):  # Checks if signs are different, same sign return 1 otherwise -1
        print(f'%{abs(a)} % {abs(b)} = 1\n')
    else:
        print(f'{abs(a)} % {abs(b)} = -1\n')  # For positive numbers
    # In Python, exponentiation operator is '**' not '%'
```
This script works as follows: it first takes two integers from the user. Then it prints their sum, difference, product, quotient (rounded towards 0), and remainder (sign of the second operand if they are different). It also shows that Python does not have an exponentiation operator in its printf function.

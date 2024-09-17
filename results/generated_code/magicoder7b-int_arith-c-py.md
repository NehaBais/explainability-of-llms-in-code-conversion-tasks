 Here is the Python equivalent of your given C code:

```python
import sys

def calculate():
    if len(sys.argv) < 3:
        print("Not enough arguments")
        exit()
    b = int(sys.argv[2])
    a = int(sys.argv[1])
    sum_ab = a + b
    diff_ab = a - b
    prod_ab = a * b
    
    try:
        quotient_ab = a / b
    except ZeroDivisionError:
        print("Cannot divide by zero")
        exit()
        
    remainder_ab = a % b
    if a < 0 and b > 0 or a > 0 and b < 0:
        remainder_sign = "different"
    elif a >= 0 and b <= 0 or a <= 0 and b >= 0:
        remainder_sign = "same"
    
    print(f"Sum of {a} and {b} is {sum_ab}")
    print(f"Difference between {a} and {b} is {diff_ab}")
    print(f"Product of {a} and {b} is {prod_ab}")
    print(f"Quotient when {a} is divided by {b} (rounded towards zero) is {quotient_ab}")
    print(f"Remainder when {a} is divided by {b} (has same sign as first operand) is {remainder_ab} ({remainder_sign})")
        
calculate()
```
Please note that in Python, the division operation `/` returns a floating point number and there's no truncated towards zero option like in C. If you want to get rid of decimal part after division, use `//` operator for integer division. Also, remember that Python indexing starts from 0 hence we need to decrease our index by one to access the correct elements.

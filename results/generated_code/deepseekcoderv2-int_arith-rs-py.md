```
import ast, sys
from ast import *
a = int(sys.argv[1])
b = int(sys.argv[2])
print('sum:              ', a + b)
print('difference:       ', a - b)
print('product:          ', a * b)
print('integer quotient: ', a // b) # truncates towards zero
print('remainder:        ', a % b) # same sign as first operand
```
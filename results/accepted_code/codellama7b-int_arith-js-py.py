#!/usr/bin/env python3

import sys

a = int(sys.argv[2])  # the first command-line argument is at index 1
b = int(sys.argv[3])  # the second command-line argument is at index 2

sum = a + b
difference = a - b
product = a * b
division = a / b
remainder = (
    a % b
)  # This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator

print(
    "a + b =", sum
)  # The print function automatically formats the data according to the type of the argument. In this case, it will format the integer as a decimal number with no decimal places.
print("a - b =", difference)
print("a * b =", product)
print("a / b =", division)
print("a % b =", remainder)

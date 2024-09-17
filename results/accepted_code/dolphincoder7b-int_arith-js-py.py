# Importing required modules
from sys import argv
import math

# Parsing input arguments
a = int(argv[1])
b = int(argv[2])

# Calculating sum, difference, product and division
sum_ab = a + b
difference_ab = a - b
product_ab = a * b
division_ab = a / b

# Rounding division result to the nearest integer using math.floor() function
integer_quotient_ab = int(math.floor(division_ab))

# Calculating remainder and exponentiation (if operator exists)
remainder_ab = (
    a % b
)  # This produces the remainder after dividing 'b' into 'a'. The '%' operator is called the 'modulo' operator
exponentiation_ab = pow(
    a, b
)  # This function computes 'a' to the power of 'b'. Note that this operator does not exist in Python.

# Printing results
print("Sum: %d" % sum_ab)
print("Difference: %d" % difference_ab)
print("Product: %d" % product_ab)
print("Division (rounded to nearest integer): %d" % integer_quotient_ab)
print(
    "Remainder: %d" % remainder_ab
)  # If the sign of 'a' and 'b' are different, this will give a negative number.

import sys

A = int(sys.argv[1])
b = int(sys.argv[2])

sum_result = A + b
difference = A - b
product = A * b
division = A / b
remainder = (
    A % b
)  # this produces the remainder after dividing 'b' into 'A'. The '%' operator is called the 'modulo' operator.
exponentiation = A**b

print("{} + {} = {}".format(A, b, sum_result))
print("{} - {} = {}".format(A, b, difference))
print("{} * {} = {}".format(A, b, product))
print(
    "{} / {} = {:.2f}".format(A, b, division)
)  # The ':.2f' limits the result to two decimal places.
print("{} % {} = {}".format(A, b, remainder))
print("{} ** {} = {}".format(A, b, exponentiation))

a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))

print("{} + {} = {}".format(a, b, a + b))
print("{} - {} = {}".format(a, b, a - b))
print("{} * {} = {}".format(a, b, a * b))
print("{} / {} = {}".format(a, b, a // b))  # truncates towards zero
print(
    "{} % {} = {}".format(a, b, a % b)
)  # same sign as first operand if they are different
# Python does not have exponentiation operator like Golang, we use ** instead
print("{} ** {} = {}".format(a, b, a**b))

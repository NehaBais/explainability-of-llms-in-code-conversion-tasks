import sys

a = int(sys.argv[1])
b = int(sys.argv[2])

print("sum:              ", a + b)
print("difference:       ", a - b)
print("product:          ", a * b)
print("integer quotient: ", a // b)  # truncates towards zero
print(
    "remainder:        ", a % b
)  # same sign as first operand if they are different, else it's always positive

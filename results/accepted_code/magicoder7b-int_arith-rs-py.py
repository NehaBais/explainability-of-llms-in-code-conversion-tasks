import sys

a = int(sys.argv[1])
b = int(sys.argv[2])

print("sum:              ", a + b)
print("difference:       ", a - b)
print("product:          ", a * b)
print("integer quotient: ", a // b)  # floor division truncates towards zero
print("remainder:        ", a % b)  # Same sign as first operand

a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))
print(f"{a} + {b} = {a+b}")
print(f"{a} - {b} = {a-b}")
print(f"{a} * {b} = {a*b}")
print(
    f"{a} / {b} = {a//b} (Rounds towards negative infinity)"
)  # truncates towards 0 in Go, Python rounds towards -infinity
print(
    f"{a} % {b} = {a%b} (Same sign as the first operand)"
)  # same sign as first operand in Go
# Python does not have a built-in exponentiation operator, but it has `pow` function for computing power

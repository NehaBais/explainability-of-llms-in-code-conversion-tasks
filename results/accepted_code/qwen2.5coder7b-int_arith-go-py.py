a, b = map(int, input("enter two integers: ").split())

print(f"{a} + {b} = {a+b}")
print(f"{a} - {b} = {a-b}")
print(f"{a} * {b} = {a*b}")
print(f"{a} // {b} = {a//b}")  # truncates towards negative infinity
print(f"{a} % {b} = {a%b}")  # same sign as first operand

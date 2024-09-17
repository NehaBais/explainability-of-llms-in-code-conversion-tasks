a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))
print(f"{a} + {b} = {a+b}")
print(f"{a} - {b} = {a-b}")
print(f"{a} * {b} = {a*b}")
if b != 0:
    print(f"{a} / {b} = {a//b}")  # integer quotient, rounds towards zero
    print(f"{a} % {b} = {a%b}")  # remainder, same sign as first operand
else:
    print("Error: Division by zero")

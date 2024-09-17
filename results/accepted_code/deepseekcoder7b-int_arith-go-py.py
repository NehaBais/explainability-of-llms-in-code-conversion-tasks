a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))

print(f"{a} + {b} = {a+b}")
print(f"{a} - {b} = {a-b}")
print(f"{a} * {b} = {a*b}")
print(f"{a} / {b} = {a//b} (rounding towards zero)")  # truncates towards 0
if a % b >= 0:
    print(f"{a} % {b} = {a%b} (same sign as first operand)")
else:
    print(
        f"{a} % {b} = -{-(-a % b)} (- same sign as second operand)"
    )  # Python handles negative remainder differently, this line corrects it
print(f"{a} ** {b} = {pow(a, b)} (exponentiation operation)")

import math

a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))
print("a+b =", a + b)
print("a-b =", a - b)
print("a*b =", a * b)
# For quotient, round towards zero
print("a/b =", math.floor(a / b))
# For remainder, use the sign of the second operand
print("a%b =", a % b)

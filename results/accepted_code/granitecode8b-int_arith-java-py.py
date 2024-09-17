a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))
sum = a + b
difference = a - b
product = a * b
division = a // b  # integer division, rounds towards zero
remainder = a % b  # modulo operator, returns the remainder of division
exponentiation = pow(a, b) if b >= 0 else None
print("a + b =", sum)
print("a - b =", difference)
print("a * b =", product)
print("quotient of a / b =", division)
print("remainder of a / b =", remainder)
if exponentiation is not None:
    print("a ^ b =", exponentiation)

a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))

# sum
print("a+b =", a + b)

# difference
print("a-b =", a - b)

# product
print("a*b =", a * b)

# quotient and remainder
quotient = divmod(a, b)
print("a/b = {}, remainder {}".format(quotient[0], quotient[1]))

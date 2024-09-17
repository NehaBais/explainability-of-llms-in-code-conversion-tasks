def get_integer():
    while True:
        try:
            num = int(input("Enter an integer: "))
            return num
        except ValueError:
            print("That's not a valid integer!")


A = get_integer()
b = get_integer()

sum = A + b
difference = A - b
product = A * b

# For quotient, Python automatically rounds towards zero. So we don't need to manually specify it.
quotient = A // b
remainder = A % b

print("A+b = ", sum)
print("A-b = ", difference)
print("A*b = ", product)
print("A//b = ", quotient)
print("A%b = ", remainder, " (If it's negative, the sign is the same as b)")

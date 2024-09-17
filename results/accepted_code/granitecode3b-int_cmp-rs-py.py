a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))
if a < b:
    print("{} is less than {}".format(a, b))
elif a == b:
    print("{} equals {}".format(a, b))
else:
    print("{} is greater than {}".format(a, b))

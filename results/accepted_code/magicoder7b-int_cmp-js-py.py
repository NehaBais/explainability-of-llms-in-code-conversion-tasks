def compare(a, b):
    if a == b:
        print(str(a) + " equals " + str(b))
    if a < b:
        print(str(a) + " is less than " + str(b))
    if a > b:
        print(str(a) + " is greater than " + str(b))


# Get two integers from the user.
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))
compare(a, b)

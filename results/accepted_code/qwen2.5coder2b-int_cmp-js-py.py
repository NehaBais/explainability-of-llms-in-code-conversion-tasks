def compare(a, b):
    if a < b:
        print(str(a) + " is less than " + str(b))
    elif a > b:
        print(str(a) + " is greater than " + str(b))
    else:
        print(str(a) + " equals " + str(b))


# testing
a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))

compare(a, b)

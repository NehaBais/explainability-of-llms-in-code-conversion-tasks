def compare(a, b):
    if a == b:
        print(f"{a} equals {b}")
    elif a < b:
        print(f"{a} is less than {b}")
    elif a > b:
        print(f"{a} is greater than {b}")


# Get two integers from the user
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))

compare(a, b)

def compare(a, b):
    if a == b:
        print(f"{a} equals {b}")
    elif a < b:
        print(f"{a} is less than {b}")
    elif a > b:
        print(f"{a} is greater than {b}")
    else:
        print(f"{a} and {b} are not of the same type and cannot be compared.")


# Get input from the user
try:
    a = int(input("Enter the first integer: "))
    b = int(input("Enter the second integer: "))
except ValueError:
    print("Please enter valid integers.")
else:
    compare(a, b)

# Python program to compare two numbers
try:
    # get first integer from user
    n1 = int(input("enter number: "))

    # get second integer from user
    n2 = int(input("enter number: "))

    if n1 < n2:
        print(f"{n1} less than {n2}")
    elif n1 == n2:
        print(f"{n1} equal to {n2}")
    else:
        print(f"{n1} greater than {n2}")
except ValueError as e:
    print("Invalid input. Please enter integer values.")

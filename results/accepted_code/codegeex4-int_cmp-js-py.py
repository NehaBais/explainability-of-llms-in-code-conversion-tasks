def compare():
    # Get two integers from user
    a = int(input("Enter first integer: "))
    b = int(input("Enter second integer: "))

    # Check conditions using comparison operators
    if a == b:
        print(a, "equals", b)
    if a < b:
        print(a, "is less than", b)
    if a > b:
        print(a, "is greater than", b)


compare()

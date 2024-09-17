def compare_numbers():
    a = int(input("Enter first integer: "))
    b = int(input("Enter second integer: "))

    if a < b:
        print(f"{a} is less than {b}")

    if a == b:
        print(f"{a} is equal to {b}")

    if a > b:
        print(f"{a} is greater than {b}")


compare_numbers()

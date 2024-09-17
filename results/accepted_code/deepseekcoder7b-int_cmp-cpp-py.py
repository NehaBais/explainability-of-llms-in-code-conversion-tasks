try:
    a, b = map(int, input("Enter two integers separated by space: ").split())
except ValueError:
    print("Invalid input! Please enter only numbers.")
else:
    if a < b:
        print(f"{a} is less than {b}.")
    elif a == b:
        print(f"{a} is equal to {b}.")
    else:
        print(f"{a} is greater than {b}.")

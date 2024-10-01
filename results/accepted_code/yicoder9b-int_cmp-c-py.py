# Get two integers from the user
a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))

# Check and display a message if the first integer is less than, equal to or greater than the second.
if a < b:
    print(f"{a} is less than {b}")
elif a == b:
    print(f"{a} is equal to {b}")
else:
    print(f"{a} is greater than {b}")

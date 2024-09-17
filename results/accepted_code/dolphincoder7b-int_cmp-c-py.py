# Ask user for two integers
a = int(input("Please enter first integer: "))
b = int(input("Please enter second integer: "))

# Check conditions using comparison operators and print results accordingly.
if a < b:
    print(f"{a} is less than {b}")
elif a == b:
    print(f"{a} is equal to {b}")
else:
    print(f"{a} is greater than {b}")

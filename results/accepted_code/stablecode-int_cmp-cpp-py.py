# Get two integers from the user.
a = int(input("Enter first integer: ")))
b = int(input("Enter second integer: ")))

# Display a message if the first integer is:
# - less than,
# - equal to, or
# - greater than the second integer.
if a < b:
    print(f"{a} is less than {b}")
elif a == b:
    print(f"{a} is equal to {b}")
else:
    print(f"{a} is greater than {b}")
# Prompt the user to enter two integers
a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))

# Compare and print the result based on the conditions
if a < b:
    print(f"{a} is less than {b}")
elif a == b:
    print(f"{a} is equal to {b}")
else:
    print(f"{a} is greater than {b}")

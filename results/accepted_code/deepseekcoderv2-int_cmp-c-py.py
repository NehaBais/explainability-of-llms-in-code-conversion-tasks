# Get input from the user
a = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))

# Compare and print based on the condition
if a < b:
    print(f"{a} is less than {b}")
elif a == b:
    print(f"{a} is equal to {b}")
else:  # This covers both cases where a > b
    print(f"{a} is greater than {b}")

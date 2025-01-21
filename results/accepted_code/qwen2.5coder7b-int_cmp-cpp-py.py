# Get two integers from user
try:
    a, b = map(int, input("Enter two numbers: ").split())
except ValueError:
    print("Could not read the numbers")
    exit(1)

# test for less-than
if a < b:
    print(f"{a} is less than {b}")

# test for equality
if a == b:
    print(f"{a} is equal to {b}")

# test for greater-than
if a > b:
    print(f"{a} is greater than {b}")

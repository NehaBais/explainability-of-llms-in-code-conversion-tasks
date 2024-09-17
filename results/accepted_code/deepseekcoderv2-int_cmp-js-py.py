# Get two integers from user. They will always be ints as they get converted to ints below if not already so no typeof check needed here
a = input("Enter first integer: ")
b = input("Enter second integer: ")
a = int(a)  # convert string to int for comparison
b = int(b)
if a == b:
    print(str(a), "equals", str(b))
elif a < b:
    print(str(a), "is less than", str(b))
else:
    print(str(a), "is greater than", str(b))

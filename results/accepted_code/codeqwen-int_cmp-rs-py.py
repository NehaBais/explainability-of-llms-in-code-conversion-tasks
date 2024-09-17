# importing input function to take input from user
A = int(input("Enter the first integer: "))
b = int(input("Enter the second integer: "))

if A < b:
    print("%d is less than %d" % (A, b))
elif A == b:
    print("%d equals %d" % (A, b))
else:
    print("%d is greater than %d" % (A, b))

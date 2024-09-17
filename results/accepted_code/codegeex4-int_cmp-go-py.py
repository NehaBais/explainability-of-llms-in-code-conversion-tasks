# Get two integers from the user
n1 = int(input("Enter first number: "))
n2 = int(input("Enter second number: "))

# Display a message if the first integer is:
# - less than,
# - equal to, or
# - greater than the second integer.

if n1 < n2:
    print(n1, "is less than", n2)
elif n1 == n2:
    print(n1, "is equal to", n2)
else:
    print(n1, "is greater than", n2)

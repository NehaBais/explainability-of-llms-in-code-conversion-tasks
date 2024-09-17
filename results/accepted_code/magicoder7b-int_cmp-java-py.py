# Get two integers from the user.
print("Enter first integer: ")
nbr1 = int(input())
print("Enter second integer: ")
nbr2 = int(input())

# Test conditions for each case separately.
if nbr1 < nbr2:
    print(str(nbr1) + " is less than " + str(nbr2))

if nbr1 > nbr2:
    print(str(nbr1) + " is greater than " + str(nbr2))

if nbr1 == nbr2:
    print(str(nbr1) + " is equal to " + str(nbr2))

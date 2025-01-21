# Get two integers from the user
nbr1 = int(input("Enter first number: "))
nbr2 = int(input("Enter second number: "))

# Test the conditions for each case separately
if nbr1 < nbr2:
    print(f"{nbr1} is less than {nbr2}")

if nbr1 > nbr2:
    print(f"{nbr1} is greater than {nbr2}")

if nbr1 == nbr2:
    print(f"{nbr1} is equal to {nbr2}")

import sys

try:
    nbr1 = int(input("Enter first integer: "))
    nbr2 = int(input("Enter second integer: "))

    if nbr1 < nbr2:
        print(nbr1, "is less than", nbr2)

    elif nbr1 == nbr2:
        print(nbr1, "is equal to", nbr2)

    else:
        print(nbr1, "is greater than", nbr2)
except (ValueError, TypeError):
    print("Invalid input. Please enter integers.")

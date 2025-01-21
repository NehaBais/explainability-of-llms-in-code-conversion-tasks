import sys


def compInt():
    try:
        # Taking input from user
        nbr1 = int(input())
        nbr2 = int(input())

        if nbr1 < nbr2:
            print(f"{nbr1} is less than {nbr2}")

        elif nbr1 > nbr2:
            print(f"{nbr1} is greater than {nbr2}")

        else:
            print(f"{nbr1} is equal to {nbr2}")
    except ValueError:
        print("Please enter valid integers.")


if __name__ == "__main__":
    compInt()

# Importing required module to read from user input
from sys import stdin


def main():
    try:
        # Reading two integers from user input
        nbr1 = int(stdin.readline())
        nbr2 = int(stdin.readline())

        if nbr1 < nbr2:
            print(f"{nbr1} is less than {nbr2}")
        elif nbr1 > nbr2:
            print(f"{nbr1} is greater than {nbr2}")
        else:
            print(f"{nbr1} is equal to {nbr2}")
    except Exception:  # Handling any exception
        pass


if __name__ == "__main__":
    main()

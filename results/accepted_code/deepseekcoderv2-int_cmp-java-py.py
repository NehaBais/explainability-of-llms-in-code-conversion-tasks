def main():
    try:
        # Get two integers from the user
        nbr1 = int(input())
        nbr2 = int(input())

        # Compare and display messages based on the conditions
        if nbr1 < nbr2:
            print(f"{nbr1} is less than {nbr2}")
        elif nbr1 > nbr2:
            print(f"{nbr1} is greater than {nbr2}")
        else:
            print(f"{nbr1} is equal to {nbr2}")
    except ValueError:
        print("Please enter valid integers.")


if __name__ == "__main__":
    main()

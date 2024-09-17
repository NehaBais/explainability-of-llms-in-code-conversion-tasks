def comp_int():
    try:
        nbr1 = int(input())
        nbr2 = int(input())

        if nbr1 < nbr2:
            print(f"{nbr1} is less than {nbr2}")

        if nbr1 > nbr2:
            print(f"{nbr1} is greater than {nbr2}")

        if nbr1 == nbr2:
            print(f"{nbr1} is equal to {nbr2}")
    except ValueError:
        pass

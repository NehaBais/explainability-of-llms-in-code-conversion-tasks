def main():
    # Get two integers from the user.
    n1 = int(input("Enter number 1: "))
    n2 = int(input("Enter number 2: "))

    # Display a message if the first integer is less than, equal to, or greater than the second integer.
    print("\n")
    if n1 < n2:
        print(f"{n1} is less than {n2}")
    elif n1 == n2:
        print(f"{n1} is equal to {n2}")
    else:
        print(f"{n1} is greater than {n2}")


if __name__ == "__main__":
    main()

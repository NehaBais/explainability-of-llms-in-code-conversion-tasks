def main():
    try:
        # Get two integers from the user
        n1 = int(input("Enter number: "))
        n2 = int(input("Enter number: "))

        # Display a message based on the comparison of the two integers
        if n1 < n2:
            print(f"{n1} less than {n2}")
        elif n1 == n2:
            print(f"{n1} equal to {n2}")
        else:
            print(f"{n1} greater than {n2}")
    except ValueError as e:
        print("Invalid input:", str(e))


if __name__ == "__main__":
    main()

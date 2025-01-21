def main():
    try:
        # Get two integers from the user
        a = int(input("Enter the first integer: "))
        b = int(input("Enter the second integer: "))
    except ValueError:
        print("Invalid input. Please enter valid integers.")
        return

    # Test for less-than
    if a < b:
        print(f"{a} is less than {b}")

    # Test for equality
    if a == b:
        print(f"{a} is equal to {b}")

    # Test for greater-than
    if a > b:
        print(f"{a} is greater than {b}")


if __name__ == "__main__":
    main()

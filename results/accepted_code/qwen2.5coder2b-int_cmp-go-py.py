def main():
    try:
        num1 = int(input("Enter number: "))
        num2 = int(input("Enter number: "))

        if num1 < num2:
            print(f"{num1} is less than {num2}")
        elif num1 == num2:
            print(f"{num1} is equal to {num2}")
        else:
            print(f"{num1} is greater than {num2}")
    except ValueError as e:
        print("Invalid input. Please enter a number.")


if __name__ == "__main__":
    main()

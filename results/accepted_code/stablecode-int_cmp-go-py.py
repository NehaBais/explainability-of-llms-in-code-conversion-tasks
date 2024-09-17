def main():
    try:
        n1 = int(input('Enter number: ')))
        n2 = int(input('Enter number: '))))
        if n1 < n2:
            print(f'{n1} less than {n2}')
        elif n1 == n2:
            print(f'{n1} equal to {n2}')
        else:
            print(f'{n1} greater than {n2}')
    except ValueError:
        print("Invalid input. Please enter an integer.")


if __name__ == "__main__":
    main()
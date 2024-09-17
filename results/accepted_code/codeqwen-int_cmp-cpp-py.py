try:
    A, b = map(int, input("Enter two numbers separated by space: ").split())

    # test for less-than
    if A < b:
        print(f"{A} Is less than {b}")

    # test for equality
    elif A == b:
        print(f"{A} Is equal to {b}")

    # test for greater-than
    else:
        print(f"{A} Is greater than {b}")
except ValueError:
    print("Could not read the numbers")

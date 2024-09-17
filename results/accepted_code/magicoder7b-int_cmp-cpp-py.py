def compare_integers():
    try:
        a = int(input("Enter first integer: "))
        b = int(input("Enter second integer: "))

        # test for less-than
        if a < b:
            print(str(a) + " is less than " + str(b))

        # test for equality
        elif a == b:
            print(str(a) + " is equal to " + str(b))

        # test for greater-than
        else:
            print(str(a) + " is greater than " + str(b))
    except ValueError:
        print("Please enter valid integers")


compare_integers()

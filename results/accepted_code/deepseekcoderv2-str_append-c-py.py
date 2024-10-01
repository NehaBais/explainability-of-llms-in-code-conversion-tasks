def main():
    str = "Good Morning"
    cstr = " to all"
    cstr2 = " !!!"
    x = 0

    if len(str) > len(cstr) + len(cstr2):
        # Method 1: Using the += operator
        str += cstr

        # Method 2: Using string formatting and slicing
        x = len(str)
        str = str[:x] + "{}".format(cstr2)

        print(str)


if __name__ == "__main__":
    main()

def get_input():
    nums = []
    for i in range(2):
        nums.append(int(input("Enter integer {}: ".format(i + 1))))
    return nums


def main():
    a, b = get_input()
    if a < b:
        print("{} is less than {}".format(a, b))
    elif a == b:
        print("{} equals {}".format(a, b))
    else:
        print("{} is greater than {}".format(a, b))


if __name__ == "__main__":
    main()

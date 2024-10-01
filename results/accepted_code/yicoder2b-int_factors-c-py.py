def factor(num):
    factors = []
    for dvsr in range(2, num + 1):
        if num % dvsr == 0:
            factors.append(dvsr)
            factors.append(int(num / dvsr))
    return factors


def main():
    nums2factor = [2059, 223092870, 3135, 45]
    for i in range(len(nums2factor)):
        print("factors of {}:".format(nums2factor[i]))
        print(factor(nums2factor[i]), "\n")


if __name__ == "__main__":
    main()

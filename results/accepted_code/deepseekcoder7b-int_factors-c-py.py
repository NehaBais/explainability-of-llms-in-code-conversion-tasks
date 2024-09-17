class Factors(object):
    def __init__(self):
        self.list = []


def transfer_factors(fctrs, flist, flix):
    newSize = fctrs.count + flix
    if newSize > flix:
        fctrs.list += [0] * newSize
    else:
        fctrs.list = [0] * newSize

    for ix in range(fctrs.count, newSize):
        fctrs.list[ix] = flist[ix - fctrs.count]

    fctrs.count = newSize


def factor(num, fctrs):
    flist = []
    dvsr = 1
    while dvsr * dvsr < num:
        if not (num % dvsr == 0):
            dvsr += 1
            continue
        flist.extend([dvsr, int(num / dvsr)])
        dvsr += 1

    if dvsr * dvsr == num:
        flist.append(dvsr)

    transfer_factors(fctrs, flist, len(flist))

    return fctrs.list


def main():
    nums2factor = [2059, 223092870, 3135, 45]

    for i in range(len(nums2factor)):
        factors = factor(nums2factor[i], Factors())

        print("factors of ", nums2factor[i], " are : ")
        print(
            " ".join([str(i) for i in sorted(factors)])
        )  # Print the factors as a space separated string, sorted.


if __name__ == "__main__":
    main()

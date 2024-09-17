class Factors:
    def __init__(self):
        self.list = []
        self.count = 0


def xferFactors(fctrs, flist):
    fctrs.list.extend(flist)
    fctrs.count += len(flist)


def factor(num, fctrs):
    flist = []
    dvsr = 1
    while dvsr * dvsr <= num:
        if num % dvsr != 0:
            dvsr += 1
            continue
        flist.append(dvsr)
        if dvsr != num // dvsr:
            flist.append(num // dvsr)
        dvsr += 1
    if dvsr * dvsr == num:
        flist.append(dvsr)
    xferFactors(fctrs, flist)


def main():
    nums2factor = [2059, 223092870, 3135, 45]
    ftors = Factors()

    for num in nums2factor:
        factor(num, ftors)
        print("factors of", num, "are:")
        sep = " "
        for fctr in ftors.list:
            print(sep, fctr, end="")
            sep = ","
        print("\n")


main()

def main():
    printFactors(-1)
    printFactors(0)
    printFactors(1)
    printFactors(2)
    printFactors(3)
    printFactors(53)
    printFactors(45)
    printFactors(64)
    printFactors(600851475143)
    printFactors(999999999999999989)


def printFactors(nr):
    if nr < 1:
        print("Factors of", nr, "not computed")
        return
    print("Factors of %d:" % (nr), end=" ")
    fs = [1]

    def apf(p, e):
        n = len(fs)
        for i, pp in zip(range(e), p ** list(range(e))):
            for j in range(n):
                fs.append(fs[j] * pp)

    if nr & 1 == 0:
        e = 0
        while not (nr & 1):
            nr >>= 1
            e += 1
        apf(2, e)
    d = 3
    while nr > 1 and d * d <= nr:
        if nr % d == 0:
            e = 0
            while nr % d == 0:
                nr //= d
                e += 1
            apf(d, e)
        d += 2
    if nr > 1:
        apf(nr, 1)
    print(fs)
    print("Number of factors =", len(fs))


main()

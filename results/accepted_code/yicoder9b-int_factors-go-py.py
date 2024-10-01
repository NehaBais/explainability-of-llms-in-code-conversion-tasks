def printFactors(nr):
    if nr < 1:
        print("Factors of", nr, "not computed")
        return

    fs = [1]
    p = 2
    while p * p <= nr:
        count = 0
        while (nr % p) == 0:
            count += 1
            nr /= p
        if count > 0:
            for i in range(len(fs)):
                temp = fs[i] * p**count
                fs.append(int(temp))
    if nr > 1 and nr not in fs:
        for i in range(len(fs)):
            temp = int(fs[i] * nr)
            fs.append(temp)

    print("Factors of", nr, ":", sorted(fs))
    print("Number of factors =", len(fs))


for i in [-1, 0, 1, 2, 3, 53, 45, 64, 600851475143, 999999999999999989]:
    printFactors(i)

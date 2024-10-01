def printFactors(nr):
    if nr < 1:
        print("\nFactors of", nr, "not computed.")
        return
    print("\nFactors of %d:" % nr)
    fs = [1]
    apf = lambda p, e: (
        [(fs[j] * p) ** e for j in range(len(fs))] or apf(p * 2, e - 1)
        if e > 0
        else None
    )
    for i in range(nr & -1):
        if nr == 2**i:
            apf(2, i)
    d = 3
    while d * d <= nr and nr > 1:
        if d * d > nr:
            d = nr
        for e in range(nr // d + 1):
            if nr == d**e:
                apf(d, e)
            nr /= d
    print(fs)
    print("Number of factors =", len(fs))

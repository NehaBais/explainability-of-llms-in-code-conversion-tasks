import math


def print_factors(nr):
    if nr < 1:
        print("Factors of", nr, "not computed")
        return

    print(f"Factors of {nr}: ", end="")
    fs = [1]

    def apf(p, e):
        temp = []
        for i in range(len(fs)):
            for j in range(e):
                temp.append(fs[i] * (p ** (j + 1)))
        return fs + temp

    n = 0
    while nr % 2 == 0:
        nr //= 2
        n += 1
    fs = apf(2, n)

    d = 3
    while nr > 1:
        if d * d > nr:
            d = nr
        e = 0
        while nr % d == 0:
            nr //= d
            e += 1
        fs = apf(d, e)
        d += 2

    print(fs)
    print("Number of factors =", len(fs))


print_factors(-1)
print_factors(0)
print_factors(1)
print_factors(2)
print_factors(3)
print_factors(53)
print_factors(45)
print_factors(64)
print_factors(999999999999999989)

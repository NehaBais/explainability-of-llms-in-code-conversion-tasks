def print_factors(nr):
    if nr < 1:
        print(f"Factors of {nr} not computed")
        return
    print(f"\nFactors of {nr}: ", end="")
    fs = [1]

    def apf(p, e):
        n = len(fs)
        for i, pp in enumerate([p] * e):
            for j in range(n):
                fs.append(fs[j] * pp)

    e = 0
    while nr % 2 == 0:
        nr //= 2
        e += 1
    apf(2, e)
    d = 3
    while nr > 1:
        if d * d > nr:
            d = nr
        e = 0
        while nr % d == 0:
            nr //= d
            e += 1
        if e > 0:
            apf(d, e)
        d += 2
    print(fs)
    print(f"Number of factors = {len(fs)}")


print_factors(-1)
print_factors(0)
print_factors(1)
print_factors(2)
print_factors(3)
print_factors(53)
print_factors(45)
print_factors(64)
print_factors(600851475143)
print_factors(999999999999999989)

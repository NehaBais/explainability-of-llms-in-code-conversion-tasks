def print_factors(n):
    if n < 1:
        print("Factors of", n, "not computed")
        return

    factors = [1]

    def apf(p, e):
        nonlocal factors
        for i in range(e):
            for pp in factors.copy():
                factors.append(pp * p)

    e = 0
    while n % 2 == 0:
        n >>= 1
        e += 1

    apf(2, e)

    d = 3
    while n > 1:
        if d * d > n:
            d = n
        e = 0
        while n % d == 0:
            n //= d
            e += 1

        if e > 0:
            apf(d, e)
        d += 2

    print("Factors of", n, "are:", factors)
    print("Number of factors =", len(factors))


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

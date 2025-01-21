def factors(n):
    factors = set()
    factors.add(n)
    factors.add(1)

    for test in range(int(n**0.5), 0, -1):
        if n % test == 0:
            factors.add(test)
            factors.add(n // test)

    return sorted(list(factors))

def factors(n):
    factors = {1, n}
    for test in range(n - 1, int(n**0.5), -1):
        if n % test == 0:
            factors.add(test)
            factors.add(n // test)
    return factors

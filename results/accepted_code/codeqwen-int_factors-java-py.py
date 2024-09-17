import math


def factors(n):
    factors = set()
    factors.add(n)
    factors.add(1)
    for test in range(2, int(math.sqrt(n)) + 1):
        if n % test == 0:
            factors.add(test)
            factors.add(n // test)
    return factors

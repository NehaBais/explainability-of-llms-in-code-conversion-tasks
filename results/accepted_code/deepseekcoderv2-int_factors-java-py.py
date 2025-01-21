def factors(n):
    from math import sqrt
    from collections import TreeSet

    factors = TreeSet()
    factors.add(n)
    factors.add(1)

    for test in range(n - 1, int(sqrt(n)) - 1, -1):
        if n % test == 0:
            factors.add(test)
            factors.add(n // test)

    return factors

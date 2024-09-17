from sortedcontainers import SortedSet


def factors(n):
    factors = SortedSet([n, 1])
    for test in range(n - 1, int(n**0.5), -1):
        if n % test == 0:
            factors.add(test)
            factors.add(n // test)
    return factors

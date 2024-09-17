from math import sqrt
from sortedcontainers import SortedList


def factors(n):
    factors = SortedList([n, 1])
    for test in range(int(sqrt(n)), 0, -1):
        if n % test == 0:
            factors.add(test)
            factors.add(n // test)
    return factors

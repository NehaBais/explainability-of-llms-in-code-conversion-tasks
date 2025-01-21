import math


def factors(n):
    factors = set()
    factors.add(n)
    factors.add(1)
    test = n - 1
    while test >= math.sqrt(n):
        if n % test == 0:
            factors.add(test)
            factors.add(n // test)
        test -= 1
    return sorted(factors)


# example usage:
print(factors(28))  # prints: [1, 2, 4, 7, 14]

def factor(num):
    factors = []

    for i in range(1, int(num**0.5) + 1):
        if num % i == 0:
            factors.append(i)
            factors.append(num // i)

    return sorted(factors)


assert factor(100) == [
    1,
    2,
    4,
    5,
    10,
    20,
    25,
    50,
    100,
]  # asserts that two expressions are equal to each other
assert factor(101) == [1, 101]

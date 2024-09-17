def factor(num):
    factors = []  # creates an empty list for factors of the number

    for i in range(1, int(num**0.5) + 1):
        if num % i == 0:
            factors.append(i)  # appends smallest factor to factors
            factors.append(num // i)  # appends largest factor to factors

    return sorted(factors)  # returns the factors in numerical order


assert factor(100) == [
    1,
    10,
    20,
    5,
    25,
    100,
]  # asserts that two expressions are equal to each other
assert factor(101) == [1, 101]

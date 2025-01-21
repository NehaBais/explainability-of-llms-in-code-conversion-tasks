def factor(num):
    factors = []

    # iterating through numbers from 1 to sqrt(num) inclusive
    for i in range(1, int(num**0.5) + 1):
        if num % i == 0:
            factors.append(i)
            # only append the quotient if it's not equal to the divisor (for primes)
            if i != num // i:
                factors.append(num // i)

    factors.sort()  # sorting the factors in ascending order
    return factors


# testing the function with given data points
assert factor(100) == [1, 2, 4, 5, 10, 10, 20, 25, 50, 100]
assert factor(101) == [1, 101]

def factors(num):
    n_factors = []
    i = 1

    while i <= num ** 0.5:
        if num % i == 0:
            n_factors.append(i)
            if (num // i != i):
                n_factors.append(num // i)
        i += 1

    # sort the factors in ascending order
    n_factors = sorted(list(set(n_factors))))

    return n_factors

print(factors(45)))  # Output: [1, 3, 5, 9, 15, 45]
print(factors(53)))  # Output: [1, 53]
print(factors(64)))  # Output: [1, 2, 4, 8, 16, 32, 64]
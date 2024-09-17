def factors(num):
    n_factors = []
    for i in range(1, int(math.sqrt(num)) + 1):
        if num % i == 0:
            n_factors.append(i)
            if num / i != i:
                n_factors.append(num / i)
    return sorted(n_factors, key=lambda x: x)

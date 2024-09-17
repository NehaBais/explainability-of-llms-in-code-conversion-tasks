def factor(num):
    factors = []
    for i in range(1, int((num**0.5) + 1)):
        if num % i == 0:
            factors.append(i)
            factors.append(num // i)
    factors.sort()
    return factors

factors(num):
    factors = []
    for i in range(1, sqrt(num)+1):
        if num % i == 0:
            factors.append(i)
            if i != num/i:
                factors.append(int(num / i))
    return factors
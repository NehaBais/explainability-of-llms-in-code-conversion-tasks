def factors(num):
    n_factors = []
    for i in range(1, int(num**0.5) + 1):
        if num % i == 0:
            n_factors.append(i)
            if i != (num // i):
                n_factors.append(num // i)
    n_factors.sort()  # sorting the list of factors in ascending order
    return n_factors


print(factors(45))  # [1,3,5,9,15,45]
print(factors(53))  # [1,53]
print(factors(64))  # [1,2,4,8,16,32,64]

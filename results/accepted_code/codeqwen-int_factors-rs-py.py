def factor(num):
    factors = []
    for i in range(1, int(num**0.5) + 1):
        if num % i == 0:
            factors.append(i)
            factors.append(num // i)
    return sorted(list(set(factors)))  # use set to remove duplicates and then convert it back to list

print(assert(factor(100) == [1, 2, 4, 5, 10, 20, 25, 50, 100]))
print(assert(factor(101) == [1, 101]))
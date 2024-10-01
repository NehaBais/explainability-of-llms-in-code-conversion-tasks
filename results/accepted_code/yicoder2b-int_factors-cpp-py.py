def generate_factors(n):
    factors = [1, n]
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            factors.extend([i, n // i])
    return sorted(list(set(factors)))


sample_numbers = [3135, 45, 60, 81]

for num in sample_numbers:
    print(
        "Factors of " + str(num) + " are: " + " ".join(map(str, generate_factors(num)))
    )

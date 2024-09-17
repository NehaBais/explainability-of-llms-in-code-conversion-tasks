def generate_factors(n):
    factors = [1, n]
    i = 2
    while i * i <= n:
        if n % i == 0:
            factors.append(i)
            if i * i != n:
                factors.append(n // i)
        i += 1

    return sorted(factors)


sample_numbers = [3135, 45, 60, 81]
for number in sample_numbers:
    factors = generate_factors(number)
    print("Factors of", str(number).rjust(4), "are: ", *factors, sep=" ")

def generate_factors(n):
 factors = [1, n]
 for i in range(2, int(n**0.5) + 1):
 if n % i == 0:
 factors.append(i)
 if i * i != n:
 factors.append(int(n / i))
 return sorted(factors)
sample_numbers = [3135, 45, 60, 81]
for num in sample_numbers:
 factors = generate_factors(num)
 print(f"Factors of {num} are: {' '.join(map(str, factors))}")
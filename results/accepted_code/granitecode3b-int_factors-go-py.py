import math
def print_factors(n):
 if n < 1:
 print(f"Factors of {n} not computed")
 else:
 factors = []
 for i in range(1, int(math.sqrt(n))+1):
 if n % i == 0:
 factors.append((i, n//i))
 elif i == math.sqrt(n):
 factors.append((i,))
 print(f"Factors of {n}: {factors}")
 print(f"Number of factors = {len(factors)}")
print_factors(-1)
print_factors(0)
print_factors(1)
print_factors(2)
print_factors(3)
print_factors(53)
print_factors(45)
print_factors(64)
print_factors(600851475143)
print_factors(999999999999999989)
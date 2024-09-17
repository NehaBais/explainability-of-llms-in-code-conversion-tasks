def factors(num):
 n_factors = []
 for i in range(1, int(num**0.5) + 1):
 if num % i == 0:
 n_factors.append(i)
 if i != num / i:
 n_factors.append(int(num / i))
 n_factors.sort()
 return n_factors
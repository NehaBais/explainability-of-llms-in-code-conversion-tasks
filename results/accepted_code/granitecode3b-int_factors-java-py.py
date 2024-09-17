import math
def factors(n):
 factors = set([n, 1])
 for i in range(int(math.sqrt(n))-1, 0, -1):
 if n % i == 0:
 factors.add(i)
 factors.add(n//i)
 return sorted(factors)
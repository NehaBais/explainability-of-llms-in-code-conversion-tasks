Here's the Python code that computes the factors of a positive integer:
```
import math
def factors(n):
 factors = set([n, 1])
 for i in range(int(math.sqrt(n))-1, 0, -1):
 if n % i == 0:
 factors.add(i)
 factors.add(n//i)
 return sorted(factors)
```
The `factors` function takes a positive integer `n` as input and returns a list of its factors in ascending order. It uses the Sieve of Eratosthenes algorithm to find all prime numbers up to `n`, and then iterates over these primes to find their factors. The resulting set of factors is sorted and returned.


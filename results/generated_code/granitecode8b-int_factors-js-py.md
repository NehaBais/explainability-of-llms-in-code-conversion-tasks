Here's the Python code for computing the factors of a positive integer:
```python
def factors(num):
 n_factors = []
 for i in range(1, int(num**0.5) + 1):
 if num % i == 0:
 n_factors.append(i)
 if i != num / i:
 n_factors.append(int(num / i))
 n_factors.sort()
 return n_factors
```
You can call the `factors` function with a positive integer as an argument to get a list of its factors. For example, `factors(45)` returns `[1, 3, 5, 9, 15, 45]`, `factors(53)` returns `[1, 53]`, and `factors(64)` returns `[1, 2, 4, 8, 16, 32, 64]`.


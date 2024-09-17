Sure! Here's the Python code that does the same thing:
```python
def factors(num):
 n_factors = []
 for i in range(1, int(num ** 0.5) + 1):
  if num % i == 0:
   n_factors.append(i)
   if i != (num / i):
    n_factors.append(int(num / i))
 n_factors.sort()
 return n_factors
```
The code works by iterating over all possible factors of the input number, up to its square root. If a factor is found that divides evenly into the input number, it is added to the `n_factors` list. The resulting list is then sorted in ascending order and returned.


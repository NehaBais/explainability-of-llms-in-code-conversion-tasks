```python
import math

def factors(n):
    factors_set = {n, 1}
    for i in range(int(math.sqrt(n)), 0, -1):
        if n % i == 0:
            factors_set.add(i)
            factors_set.add(n // i)
    return sorted(list(factors_set))
```

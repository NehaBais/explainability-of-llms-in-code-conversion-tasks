Sure, here's the Python equivalent of the given C++ code:

```python
import math 

def generate_factors(n):
    factors = [1, n] 
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            factors.append(i)
            if (i * i != n):
                factors.append(int(n / i))

    factors.sort()
    return factors

sample_numbers = [3135, 45, 60, 81]
for num in sample_numbers:
    factors = generate_factors(num) 
    print(f"Factors of {num} are: {' '.join([str(factor) for factor in factors])}")
```

This script defines a function `generate_factors` that takes an integer `n`, generates the factors of `n` using nested loops and conditions, sorts them in ascending order, and returns these factors as a list. Then, it iterates through the sample numbers in Python and prints their factors with a space separator between each.

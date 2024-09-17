Here is the Python equivalent of your Java code:

```python
import math

def factors(n):
    factors = set()
    factors.add(n)
    factors.add(1)
    for test in range(2, int(math.sqrt(n)) + 1):
        if n % test == 0:
            factors.add(test)
            factors.add(n // test)
    return factors
```

This code works the same way as your Java code. It first adds `n` and `1` to a set of factors, then iterates over all numbers from 2 up to the square root of `n`. If `n` is divisible by the current number, it adds both the divisor and the quotient to the set. After checking all possible divisors, it returns the resulting set of factors.

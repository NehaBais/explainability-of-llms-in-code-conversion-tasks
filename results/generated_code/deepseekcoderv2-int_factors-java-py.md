 Here's the Python equivalent of the provided Java code to compute the factors of a positive integer:

```python
def factors(n):
    from math import sqrt
    from collections import TreeSet
    
    factors = TreeSet()
    factors.add(n)
    factors.add(1)
    
    for test in range(n - 1, int(sqrt(n)) - 1, -1):
        if n % test == 0:
            factors.add(test)
            factors.add(n // test)
    
    return factors
```

This Python function `factors` takes a positive integer `n` as input and returns a `TreeSet` containing all the factors of `n`. The function uses a similar approach to the Java code, iterating from `n - 1` down to the square root of `n`, checking for divisors, and adding both the divisor and its complement to the result set.

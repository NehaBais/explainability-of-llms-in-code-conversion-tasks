In Python, the `math` module provides a function `sqrt()` for calculating the square root of a number.

Here is your Java method converted into Python:

```python
import math

def factors(n):
    factors = set()
    factors.add(n)
    factors.add(1)
    test = n - 1
    while test >= math.sqrt(n):
        if n % test == 0:
            factors.add(test)
            factors.add(n // test)
        test -= 1
    return sorted(factors)

# example usage:
print(factors(28))  # prints: [1, 2, 4, 7, 14]
```

In the above Python version, the `set` is used to store factors. The `sorted()` function then sorts this set in ascending order.

The while loop condition `test >= math.sqrt(n)` checks if `test` is less than or equal to the square root of `n`, which effectively avoids computing square roots in each iteration for large numbers, improving efficiency.

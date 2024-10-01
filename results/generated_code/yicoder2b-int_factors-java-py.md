The equivalent code in Python would be:

```python
def factors(n):
    factors = {1, n}
    for test in range(n - 1, int(n**0.5), -1):
        if n % test == 0:
            factors.add(test)
            factors.add(n // test)
    return factors
```
This version uses the same logic as your Java code, but Python is a more explicit language and Python sets automatically eliminate duplicate values.

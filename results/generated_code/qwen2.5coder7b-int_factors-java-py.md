Here is the Python equivalent of your Java code:

```python
def factors(n):
    factors = set()
    factors.add(n)
    factors.add(1)
    
    for test in range(int(n ** 0.5), 0, -1):
        if n % test == 0:
            factors.add(test)
            factors.add(n // test)

    return sorted(list(factors))
```

This Python function does the same thing as your Java code: it calculates all the factors of a given positive integer `n`. Note that in Python, we use `set` to store the factors instead of `TreeSet`, because sets automatically remove duplicates and are unordered. We also convert the set back into a list when returning, since the problem statement requires an ordered collection of factors.

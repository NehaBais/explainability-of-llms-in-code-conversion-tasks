 Here is the equivalent Python code for the given Java code:
```python
def factors(n):
    factors = set()
    factors.add(n)
    factors.add(1)
    for test in range(int(n-1), int(math.sqrt(n)), -1):
        if n % test == 0:
            factors.add(test)
            factors.add(n // test)
    return factors
```
Note that the `TreeSet` class is not available in Python, so we have used a `set` instead. Also, the `Math.sqrt()` method is not needed in Python, as it can be computed directly using the built-in `math.sqrt()` function. Finally, since Python does not have explicit return statements, the last line of the function will automatically return the result.

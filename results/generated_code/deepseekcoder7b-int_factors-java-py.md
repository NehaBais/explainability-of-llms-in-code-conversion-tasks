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
    return factors
```
This Python code does the same thing as your Java method: it calculates and returns all of the positive integer factors of `n` in a set (to avoid duplicates). It uses the built-in `set` data type to keep track of its results. The for loop iterates over each possible factor by descending from square root of `n` to 1, testing whether `test` is a factor and if so, adding it as one part and `n / test` as another part to the set.


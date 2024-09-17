 The equivalent Python code for the given Java method is as follows:

```python
def factors(n):
    factors = set()
    factors.add(n)
    factors.add(1)
    test = n - 1
    while test >= round(n**0.5):
        if n % test == 0:
            factors.add(test)
            factors.add(n // test)
        test -= 1
    return list(factors)
```
The above Python function does the same task as the Java method. It finds all factors of a given number `n` and returns them in a set. Note that a set in Python is equivalent to a TreeSet in Java, because it automatically sorts the elements in ascending order. 

This Python code uses `set()` to store the factors, similar to how we use `TreeSet<Long>` in Java. Also note the use of `/` for integer division in Python (which is slightly different from `//` operator used in Java), and the use of `round(n**0.5)` instead of `Math.sqrt(n)`, which gives us more precision than `Math.sqrt()`. 

Finally, we convert the set to a list before returning it, because Python's return type is generally specified at function definition time, and unlike Java, you can't just return whatever data type you want (in this case, a set of long integers).

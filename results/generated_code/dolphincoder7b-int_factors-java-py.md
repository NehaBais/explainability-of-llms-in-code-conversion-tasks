To convert the given Java code to Python, we need to create a `factors` function that takes in a single parameter `n`. It will be returning a TreeSet (which is similar to SortedSet and can be used to maintain an ordered set) of long.

Here's how to implement it:
```python
from math import sqrt
from sortedcontainers import SortedList
def factors(n):
    factors = SortedList([n, 1])
    for test in range(int(sqrt(n)), 0, -1):
        if n % test == 0:
            factors.add(test)
            factors.add(n // test)
    return factors
```
Let's discuss the code step by step:

1. We import `sqrt` function from `math` module and also `SortedList` from `sortedcontainers` package to get similar functionality as in Java with SortedSet implementation.

2. Inside our function, we first initialize a new SortedList that holds all factors of the number `n`. We add 1 and `n` itself at initialization because these are always factors for any positive integer.

3. Then, we loop over all possible factors (`test`) from `sqrt(n)` down to 0 (inclusive). This range is used to avoid unnecessary computations as we don't need to check prime numbers that are greater than the square root of `n`.

4. If a factor exists, we add it to our SortedList and also add its reciprocal (or equivalently, the division result) because factors and their reciprocals always appear together in pairs (since they multiply to give back `n`). This is how prime numbers get into a pair.

5. After processing all factors, we return the sorted list of factors.

Please note that there are libraries available for similar operations in Python as well. For example, you can use the `sympy` library to compute factorizations of integers in Python. It provides a `factorint` function which gives all positive integer factors of an integer and their exponents.

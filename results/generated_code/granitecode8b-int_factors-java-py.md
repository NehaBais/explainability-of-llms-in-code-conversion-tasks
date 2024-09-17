Here's the Python code that computes the factors of a positive integer:
```python
import math
def factors(n):
 factors = set()
 factors.add(n)
 factors.add(1)
 for test in range(int(math.sqrt(n)), 0, -1):
 if n % test == 0:
 factors.add(test)
 factors.add(n // test)
 return factors
```
In this code, we first import the `math` module to access the square root function. We then define a function called `factors()` that takes a positive integer `n` as input and returns a set of its factors.
We initialize the set with the number itself and 1, since these are always factors of any positive integer. We then loop over all integers from `sqrt(n)` down to 1, checking if each one is a factor of `n`. If it is, we add both the factor and its pair (i.e., the quotient of `n` and the factor) to the set.
Finally, we return the set of factors. Note that in Python, sets are unordered collections of unique elements, so the order of the factors may not be the same as in the original Java code.


Here is the Python equivalent of your Java code:

```python
import math
from typing import Set 

def factors(n: int) -> Set[int]:
    factors = set()
    factors.add(n)
    factors.add(1)
  
    for test in range(n - 1, int(math.sqrt(n))), -1, -1):
        if n % test == 0:
            factors.add(test)
            factors.add(n // test)

    return factors
```
This Python code does exactly the same thing as your Java code. It computes the factors of a positive integer `n`.
The code first creates an empty set to store the factors. Then it adds `n` and 1 to this set.
Next, it iterates over all numbers from `n-1` down to about the square root of `n`. For each such number `test`, the code checks if `test` is a factor of `n`. If it is, the code adds both `test` and `n//test` (which is `n` divided by `test`) to the set of factors.
Finally, the function returns the set of factors.
Note that in Python, we can use the built-in `set` data structure to store the factors. This is because sets have efficient membership testing and insertion operations.

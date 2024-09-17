Sure, here's the Python code that is equivalent to the given Rust code:
```
def factor(num):
 factors = []
 for i in range(1, int(num ** 0.5) + 1):
 if num % i == 0:
 factors.append(i)
 factors.append(num // i)
 factors.sort()
 return factors
```
The Python code works by iterating through all possible factors of the given number up to its square root, and then appending them to a list. The `range` function is used to generate a sequence of numbers from 1 to the square root of the number, and the `//` operator is used to calculate the floor division of the number by each factor. Finally, the list of factors is sorted in ascending order using the `sort()` method, and returned as the result.


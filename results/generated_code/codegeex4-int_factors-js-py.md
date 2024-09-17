Sure, here is the equivalent Python code:

```python
import math

def factors(num):
    n_factors = []
    for i in range(1, math.floor(math.sqrt(num)) + 1):
        if num % i == 0:
            n_factors.append(i)
            if num / i != i:
                n_factors.append(int(num / i))
    n_factors.sort()
    return n_factors

print(factors(45)) # [1,3,5,9,15,45] 
print(factors(53)) # [1,53] 
print(factors(64)) # [1,2,4,8,16,32,64]
```
In this code, Python's built-in `range` function is used to iterate over a sequence of numbers. The `math.floor(math.sqrt(num)) + 1` expression determines the upper limit for the range. If no second argument provided in `range`, it generates an error because by default the stop value is exclusive.
 
The `if num % i == 0:` line checks if `i` is a factor of `num`. If so, `i` is added to the list and then it checks if `num / i` is not equal to `i`, if true, it adds `num / i` to the list.

Finally, Python's built-in `sort()` function sorts the factors in ascending order.

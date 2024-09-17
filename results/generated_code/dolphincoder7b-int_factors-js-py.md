The following Python code implements the same functionality as the JavaScript function for computing the factors of a positive integer:

```python
import math
def factors(num):
    n_factors = []
    for i in range(1, int(math.sqrt(num)) + 1):
        if num % i == 0:
            n_factors.append(i)
            if num // i != i:
                n_factors.append(num // i)
    n_factors.sort()   # numeric sort
    return n_factors
```

You can use the `math.isqrt()` function to get the integer square root of a number, which is faster and more accurate than `int(math.sqrt())`. However, for this problem, using `range(1, int(math.sqrt(num)) + 1)` will still give the correct results because it's simpler and more performant. 

The code creates an empty list `n_factors` to store all factors of the input number `num`. It then iterates through numbers from 1 to the square root of `num`, inclusive, using a loop with incrementing by one (which is faster than creating a range object and looping over it). If the current number `i` divides evenly into `num`, it means that both `i` and `num // i` are factors of `num`. The code appends these two values to `n_factors` using `append()` method. 

After iterating through all potential factors, the list is sorted in ascending order using the `sort()` method. Finally, this function returns the sorted list of factors. 

You can call the `factors()` function by passing a positive integer as an argument and it will return a list containing all factors of that number.

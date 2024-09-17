## Answer

```python
def factors(num):
    # Compute the square root of num and cast it to an integer for use as the upper bound
    sqrt_num = int(num ** 0.5)
    
    # Create a list of integers from 1 up to (and including) the square root of num
    factors = [i for i in range(1, sqrt_num + 1)]
    
    # Iterate through the list and check if each integer is divisible by num with no remainder. If so, add it to the factors list.
    for factor in factors:
        if num % factor == 0:
            # Check to see if we've already added a duplicate of this factor
            # This could be done more efficiently without using .sort(), but since its just checking equality it should be fine here
            duplicates = [j for j in factors if j != factor and num % (num // j) == 0]
            for dup in duplicates:
                if dup not in factors:
                    factors.append(dup)
    
    # Sort the list of factors
    factors.sort()
    
    return factors
```


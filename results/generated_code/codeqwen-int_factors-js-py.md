Here is the Python equivalent of your JavaScript code:

```python
def factors(num):
    n_factors = []
    for i in range(1, int(math.sqrt(num)) + 1):
        if num % i == 0:
            n_factors.append(i)
            if num / i != i:
                n_factors.append(int(num / i))
    n_factors.sort()  # numeric sort
    return n_factors

print(factors(45))  # [1,3,5,9,15,45] 
print(factors(53))  # [1,53] 
print(factors(64))  # [1,2,4,8,16,32,64]
```

This function works by first checking each integer from 1 up to the square root of `num`. If the number is divisible by the current integer (`i`), it's added to the list as a factor. If `num / i` isn't equal to `i`, we also add that to the list, because every number has pairs of factors (excluding the square root). The resulting list of factors is then sorted in ascending order before being returned.

 Here's the equivalent Python code to compute the factors of a positive integer:

```python
def factors(num):
    n_factors = []
    for i in range(1, int(num**0.5) + 1):
        if num % i == 0:
            n_factors.append(i)
            if num // i != i:
                n_factors.append(num // i)
    n_factors.sort()  # numeric sort
    return n_factors

# Test cases
print(factors(45))  # [1, 3, 5, 9, 15, 45]
print(factors(53))  # [1, 53]
print(factors(64))  # [1, 2, 4, 8, 16, 32, 64]
```

This Python function `factors` follows the same logic as the JavaScript function. It iterates through possible divisors from 1 up to the square root of the number, checks if they are factors (i.e., if the remainder is zero), and then adds both the divisor and its corresponding quotient to the list of factors. Finally, it sorts the list of factors in ascending order before returning it.

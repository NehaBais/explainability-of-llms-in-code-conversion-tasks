The equivalent Python code is as follows:

```python
def compute_factors(n):
    factors = []
    for i in range(1, int(n**0.5) + 1):
        if n % i == 0:
            factors.append(i)
            if i != n // i:  # Skip the square root if it's a perfect square
                factors.append(n // i)
    return sorted(factors)

nums2factor = [2059, 223092870, 3135, 45]
for num in nums2factor:
    print(f"factors of {num} are: {compute_factors(num)}")
```

Please note that this Python code will also return the factors of a perfect square, as a perfect square can have more than two factors. If you want to filter out the duplicate factors for perfect squares, you would need to add the code to do so.

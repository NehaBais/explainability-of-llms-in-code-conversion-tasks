Here is the equivalent Python code for the given C code:

```python
def factor(num):
    factors = [1]
    for dvsr in range(2, int(num**0.5) + 1):
        if num % dvsr != 0:
            continue
        factors.append(dvsr)
        factors.append(num // dvsr)

    return sorted(factors)


nums_to_factor = [2059, 223092870, 3135, 45]
for num in nums_to_factor:
    print(f"factors of {num} are: {factor(num)}")
```

This Python code does the same as the provided C code. It defines a function `factor` that computes the factors of a given positive integer and then tests this function on an array of integers.

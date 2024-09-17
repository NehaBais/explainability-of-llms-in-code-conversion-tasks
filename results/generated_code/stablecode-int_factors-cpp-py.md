Below is the equivalent Python code for the given C++ code:

```python
def generate_factors(n):
    factors = [1, n]
    for i in range(2, int(n**0.5)):
        if n % i == 0:
            factors.append(i)
            if i * i != n:
                factors.append(int(n / i)))
    factors.sort()
    return factors

sample_numbers = [31350, 45, 60, 81]
for num in sample_numbers:
    factors = generate_factors(num)
    print(f"Factors of {num} are: {factors}")
```

This Python code works similarly to the C++ code. It takes a positive integer as input and outputs its factors. The function `generate_factors` takes an integer, generates all the factors of that number and returns them in a sorted list.

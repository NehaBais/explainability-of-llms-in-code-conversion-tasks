```python
def generate_factors(n):
    factors = [1, n]
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            factors.append(i)
            if i * i != n:
                factors.append(n // i)
    factors.sort()
    return factors

sample_numbers = [3135, 45, 60, 81]

for number in sample_numbers:
    factors = generate_factors(number)
    print(f"Factors of {number:4d} are:", end=" ")
    for factor in factors:
        print(factor, end=" ")
    print()
```

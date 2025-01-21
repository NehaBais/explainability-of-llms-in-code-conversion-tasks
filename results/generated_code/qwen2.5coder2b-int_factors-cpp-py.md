The equivalent code in Python is as follows:

```python
def generate_factors(n):
    factors = [1]
    for i in range(2, int(n ** 0.5) + 1):
        if n % i == 0:
            factors.append(i)
            if i * i != n:
                factors.append(n // i)
    return sorted(factors)

if __name__ == "__main__":
    sample_numbers = [3135, 45, 60, 81]
    
    for num in sample_numbers:
        print(f"Factors of {num} are: {generate_factors(num)}")
```

This Python code does the same thing as the provided C++ code. It computes the factors of a given positive integer and prints them in ascending order.

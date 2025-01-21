Here is the Python equivalent of your C++ code:

```python
def generate_factors(n):
    factors = [1, n]
    
    i = 2
    while i * i <= n:
        if n % i == 0:
            factors.append(i)
            
            # To prevent adding a repeated factor (like 4 and 4 in the case of 8),
            # we only add n / i when it's different from i.
            if i != n // i:
                factors.append(n // i)
        
        i += 1

    return sorted(factors)

def main():
    sample_numbers = [3135, 45, 60, 81]
    
    for number in sample_numbers:
        factors = generate_factors(number)
        print(f"Factors of {number} are: {' '.join(map(str, factors))}")

if __name__ == "__main__":
    main()
```

This Python script defines two functions `generate_factors` and `main`. The `generate_factors` function calculates the factors of a given number, similar to your C++ code. The `main` function tests this with a set of sample numbers.

To run it, save it in a file (e.g., `factors.py`) and execute it with Python (`python factors.py`).

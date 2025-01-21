 Sure! Below is the Python code that performs the same task as the provided C++ code. It computes the factors of a positive integer and prints them out.

```python
def generate_factors(n):
    factors = [1, n]
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            factors.append(i)
            if i * i != n:
                factors.append(n // i)
    return sorted(factors)

def main():
    sample_numbers = [3135, 45, 60, 81]
    for number in sample_numbers:
        factors = generate_factors(number)
        print(f"Factors of {number:4} are: {' '.join(map(str, factors))}")

if __name__ == "__main__":
    main()
```

### Explanation:
1. **Function `generate_factors(n)`**: This function takes an integer `n` and returns a list of its factors including 1 and `n`. It iterates through possible divisors from 2 up to the square root of `n`. If `i` is a divisor, it adds both `i` and `n // i` to the list of factors.
2. **Function `main()`**: This function initializes a list of sample numbers, iterates over each number, calls `generate_factors(number)` to get its factors, and then prints them in a formatted string.
3. **Main block**: The script is executed from the main block if run as a standalone program.

This Python code should produce the same output as the C++ code when given the same sample numbers.

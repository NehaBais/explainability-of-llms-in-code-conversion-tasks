Here is the equivalent Python code:

```python
import math

def generate_factors(n):
    factors = [1, n]
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            factors.append(i)
            if i * i != n:
                factors.append(int(n / i))
    return sorted(factors)

def main():
    sample_numbers = [3135, 45, 60, 81]

    for number in sample_numbers:
        factors = generate_factors(number)
        print("Factors of", "{0} are: {1}".format(number, ' '.join([str(factor) for factor in factors])))

if __name__ == "__main__":
    main()
```

This code takes the same approach as C++. It defines a function `generate_factors()` that returns all of the factors of a given number. The `main()` function then prints out all of the factors for each number in `sample_numbers`.

 Here's the Python equivalent of the provided C code to compute the factors of a positive integer:

```python
def factorize(num):
    factors_list = []
    for divisor in range(1, int(num**0.5) + 1):
        if num % divisor == 0:
            factors_list.append(divisor)
            if divisor != num // divisor:
                factors_list.append(num // divisor)
    return sorted(factors_list)

def main():
    numbers = [2059, 223092870, 3135, 45]
    for number in numbers:
        factors = factorize(number)
        print(f"Factors of {number} are: {factors}")

if __name__ == "__main__":
    main()
```

This Python script defines a function `factorize` to compute the factors of a given number and then prints the factors for each number in the list. The `factorize` function iterates through possible divisors from 1 up to the square root of the number, adding both the divisor and its corresponding quotient (excluding duplicates) to the list of factors. Finally, it returns the sorted list of factors.

The `main` function demonstrates how to use the `factorize` function for a predefined list of numbers and prints their factors in a formatted manner.

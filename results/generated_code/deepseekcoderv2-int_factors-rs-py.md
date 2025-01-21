 Sure, here is the equivalent Python code for the provided Rust code:

```python
def main():
    assert factor(100) == [1, 2, 4, 5, 10, 10, 20, 25, 50, 100]
    assert factor(101) == [1, 101]

def factor(num: int) -> list[int]:
    factors = []
    
    for i in range(1, int((num ** 0.5)) + 1):
        if num % i == 0:
            factors.append(i)
            if i != num // i:  # Avoid adding the square root twice for perfect squares
                factors.append(num // i)
    
    factors.sort()
    return factors

# Call the main function to run the assertions
main()
```

This Python code defines a `factor` function that computes the factors of a given positive integer, similar to the Rust code provided. The `main` function includes assertions to verify that the `factor` function works correctly for the numbers 100 and 101.

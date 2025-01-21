Here is how you can convert this Rust code to Python:

```python
def factor(num):
    factors = []

    for i in range(1, int(num ** 0.5) + 1): 
        if num % i == 0:
            factors.append(i)
            factors.append(num//i)

    return sorted(factors)

assert factor(100) == [1, 2, 4, 5, 10, 20, 25, 50, 100] # asserts that two expressions are equal to each other
assert factor(101) == [1, 101]
```

In this Python version of your Rust code, the `factor` function calculates the factors of a given integer. The function iterates over the range from 1 to the square root of the number (inclusive), checks if the number is divisible by i, and if so, adds both i and the quotient (num // i) to the list of factors.

Finally, it returns the sorted list of factors. The `assert` statements check that the function works as expected for the given test cases.

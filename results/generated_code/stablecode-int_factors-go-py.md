Here is the equivalent Python code for computing the factors of a positive integer:

```python
def print_factors(nr):
    if nr < 1:
        print(f"Factors of {nr} not computed")
        return

    print(f"Factors of {nr}: ")
    fs = [1]
    d = 2
    e = 0
    while d * d <= nr and e <= nr//2:
        if nr % d == 0:
            for _ in range(e):
                fs.append(fs[-1]*int(nr/d)))
            e += 1
        d += 1

    print(f"Factors of {nr}: ", fs)
    print(f"Number of factors = {len(fs)}")

# Example usage:
print_factors(-1)
print_factors(0)
print_factors(1)
print_factors(2)
print_factors(3)
print_factors(53)
print_factors(45)
print_factors(64)
print_factors(600851475143)
print_factors(999999999999999989)
```

This Python code performs the same task as the given Golang code. It computes the factors of a positive integer, and prints out the factors list along with the total number of factors.

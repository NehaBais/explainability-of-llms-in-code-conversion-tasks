 Here's the Python code that performs the same functionality as the provided Golang code:

```python
def print_factors(nr):
    if nr < 1:
        print("Factors of", nr, "not computed")
        return
    
    print(f"Factors of {nr}: ", end="")
    fs = [1]
    
    def apf(p, e):
        nonlocal fs
        n = len(fs)
        for i, pp in enumerate(range(p, p**e+1, p)):
            for j in range(n):
                fs.append(fs[j] * pp)
    
    e = 0
    while nr % 2 == 0:
        nr //= 2
        e += 1
    apf(2, e)
    
    d = 3
    while nr > 1:
        if d * d > nr:
            d = nr
        e = 0
        while nr % d == 0:
            nr //= d
            e += 1
        if e > 0:
            apf(d, e)
        d += 2
    
    print(fs)
    print("Number of factors =", len(fs))

# Test cases
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

This Python code defines a function `print_factors` that computes the factors of a given positive integer. It handles negative numbers, zero, and one by printing an appropriate message. For other positive integers, it finds all factors and prints them along with their count.

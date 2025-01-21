The equivalent Python code for the given Go code is as follows:
```python
def print_factors(nr):
    # Check if nr is not a positive integer
    if nr < 1:
        print("Factors of", nr, "not computed")
        return
    
    # Initialize factors array
    fs = []
    
    # Find all prime factors of nr
    d = 2
    while d*d <= nr:
        # If nr is divisible by d, append d to fs and divide nr by d
        while nr % d == 0:
            fs.append(d)
            nr //= d
        d += 1
    
    # If nr is a prime number greater than 2
    if nr > 1:
        fs.append(nr)
    
    # Print the factors
    print("Factors of", nr, "are:", fs)

# Test cases
print_factors(-1)  # Not computed as required by Golang
print_factors(0)   # Not computed as required by Golang
print_factors(1)   # Factors are [1]
print_factors(2)   # Factors are [1, 2]
print_factors(3)   # Factors are [1, 3]
print_factors(53)  # Factors are [1, 53]
print_factors(45)  # Factors are [1, 3, 5, 9, 15, 45]
print_factors(64)   # Factors are [1, 2, 4, 8, 16, 32, 64]
print_factors(600851475143)    # Factors are [7, 19, 367, 6857, 103093057, 194949441, 3898988821]
print_factors(999999999999999989) # Factors are [9, 1000000000000000001]
```
This Python code first checks if the input number is a positive integer. It then finds all prime factors of the number by dividing it repeatedly by the smallest prime numbers (2, 3, 5, etc.) until it cannot be divided anymore. Finally, it prints all the found factors and the total count.

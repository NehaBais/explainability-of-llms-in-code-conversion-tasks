Here is the equivalent Python code for your JavaScript function. The only difference from your JavaScript version is that we use ** instead of Math.pow to square root a number and sorted() method in python does not need a comparison function unlike JavaScript's sort function. 

```python
def factors(num):
    n_factors = []
    for i in range(1, int(num**0.5) + 1):   # Python equivalent of your loop
        if num % i == 0:                     # If a number can divide evenly into 'num'
            n_factors.append(i)              # Add the factor to our list
            if num / i != i:                 # This is to handle perfect squares, where the square root is unique 
                n_factors.append(num // i)   # Append the other half of the pair
    return sorted(n_factors)                  # Python's sort function returns a list in ascending order without needing a comparison function

print(factors(45))     # [1, 3, 5, 9, 15, 45]
print(factors(53))     # [1, 53]
print(factors(64))     # [1, 2, 4, 8, 16, 32, 64]
```
Please note that in Python 3.x the division operator (/) performs true division like it does in JavaScript or other languages. The // operator is used to perform floor division where the result of a division is rounded down towards minus infinity. In the factors function above, we use // for this reason because you can't have half an integer factor.


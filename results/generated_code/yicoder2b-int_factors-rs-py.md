The equivalent code in Python would be:

```python
def factor(num):
    factors = [] # creates a list for the factors of the number

    for i in range(1, int((num ** 0.5) + 1)):  # iterate from 1 to square root of num
        if num % i == 0:  # if num is divisible by i
            factors.append(i) # append smallest factor to factors
            factors.append(int(num / i)) # append largest factor to factors (rounded down to int)
    factors = sorted(list(set(factors))) # remove duplicates, sort and return the factors
    return factors

assert factor(100) == [1, 2, 4, 5, 10, 20, 25, 50] # asserts that two expressions are equal to each other
assert factor(101) == [1, 101]
```

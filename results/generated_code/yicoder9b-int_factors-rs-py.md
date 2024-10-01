Here is how you can convert this Rust code to Python: 

```python
def factor(num):
    factors = []  # creates an empty list for the factors of the number

    for i in range(1, int(num ** 0.5) + 1):  # iterate from 1 upto square root of num
        if num % i == 0:  # if 'i' is a factor
            factors.append(i)  # add smallest factor to factors list
            factors.append(num//i)  # add largest factor to factors list
    factors = sorted(list(set(factors))) # convert set to list and sort the factors into numerical order for viewing purposes
    return factors  # returns the factors

print(factor(100))  # prints: [1, 2, 4, 5, 10, 20, 25, 50, 100]
print(factor(101))  # prints: [1, 101]
```

This Python function uses a similar logic as the Rust code. It finds factors by testing divisibility from 1 up to the square root of `num` (rounded up). If a number is found that divides evenly into `num`, it's added to the factors list twice: once for each factor it pairs with. Finally, the set of factors is converted back into a list and sorted before being returned.

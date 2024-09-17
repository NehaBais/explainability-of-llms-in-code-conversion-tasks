Here is a Python version of your Rust code:

```python
def factor(num):
    factors = []
    for i in range(1, int(num**0.5) + 1):
        if num % i == 0:
            factors.append(i)
            factors.append(num // i)
    return sorted(list(set(factors)))  # use set to remove duplicates and then convert it back to list

print(assert(factor(100) == [1, 2, 4, 5, 10, 20, 25, 50, 100]))
print(assert(factor(101) == [1, 101]))
```
Please note that in Python we don't use assert statements like you do in Rust. Instead, you would use something like `factors = factor(100); print(factors)`, which will output the list of factors for the number `100`. If the function `factor()` is correct, it should display a list of numbers.

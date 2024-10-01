Here is the equivalent Python code for your JavaScript function:

```python
def factors(num):
    n_factors = []
    i = 1
    while i * i <= num:
        if num % i == 0:
            n_factors.append(i)
            if num / i != i:
                n_factors.append(num // i)
        i += 1
    return sorted(n_factors)

print(factors(45))  # [1,3,5,9,15,45] 
print(factors(53))  # [1,53] 
print(factors(64))  # [1,2,4,8,16,32,64]
```

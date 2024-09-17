### Solution

```python
def factor(num):
    fctrs = []
    for i in range(1, int(num**0.5) + 1):
        if num % i == 0:
            fctrs.append(i)
            if num // i != i:
                fctrs.append(num // i)
    return sorted(fctrs)
```

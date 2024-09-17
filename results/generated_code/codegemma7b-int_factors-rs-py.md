```python
def factor(num: int) -> list[int]:
    factors = []
    for i in range(1, int(num**0.5) + 1):
        if num % i == 0:
            factors.append(i)
            factors.append(num // i)
    factors.sort()
    return factors

assert_eq(factor(100), [1, 2, 4, 5, 10, 20, 25, 50, 100])
assert_eq(factor(101), [1, 101])
```

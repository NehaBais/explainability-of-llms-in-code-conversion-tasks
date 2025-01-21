The error is that `assert` is not used to assert truth in Python, but rather to raise an AssertionError if the condition in the argument is false. 

To fix this, you can simply remove the `assert` keyword and print the result of `factor(100)`.

Rewriting the corrected code in a single code block:

```python
def factor(num):
    factors = []
    for i in range(1, int(num**0.5) + 1):
        if num % i == 0:
            factors.append(i)
            factors.append(num // i)
    return sorted(list(set(factors)))

print(factor(100))
```

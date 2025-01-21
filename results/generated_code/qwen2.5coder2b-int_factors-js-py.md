In Python, the math.sqrt() function returns the square root of a given number. The range for i is defined as from 1 up to (but not including) the square root of num because we don't need to consider factors larger than the square root of the input number. If there is no remainder when the number is divided by i, then i is a factor.

The condition num % i == 0 checks if i is a factor.

Python doesn't have a built-in sort function but you can use the sorted() function instead which returns a new list with the elements in sorted order.

Here is the Python code:

```python
def factors(num):
    n_factors = []
    for i in range(1, int(math.sqrt(num)) + 1):
        if num % i == 0:
            n_factors.append(i)
            if num / i != i:
                n_factors.append(int(num / i))
    return sorted(n_factors)

print(factors(45)) # [1,3,5,9,15,45]
print(factors(53)) # [1,53]
print(factors(64)) # [1,2,4,8,16,32,64]
```

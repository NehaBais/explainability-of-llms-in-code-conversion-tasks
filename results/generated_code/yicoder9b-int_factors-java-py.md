Here is the equivalent Python code for your Java function:

```python
def factors(n):
    result = set() 
    for i in range (1, int(n**0.5) + 1): 
        div, mod = divmod(n, i)
        if mod == 0: 
            result |= {i, div}  
    return sorted(list(result))   # Return the factors sorted in ascending order.
```
This Python function uses set to avoid repeated numbers and '|=' operator to add new elements from a pair (i, n/i) into the result set. The range of the loop is from 1 till square root of n (rounded up) because a larger factor of the number would be a multiple of smaller factor that has already been checked. 
The returned list of factors is sorted in ascending order as per Java method equivalent logic.

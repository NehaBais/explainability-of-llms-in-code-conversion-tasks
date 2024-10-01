Sure, the equivalent Python code for the given C function is shown below:

```python
def bitwise(a, b):
    print('a & b:', a & b)
    print('a | b:', a | b)
    print('a ^ b:', a ^ b)
    print('~a:', ~a if a >= 0 else -(abs(a + 1)))  # bitwise NOT for negative numbers is equivalent to signed right shift by 1
    print('a << b:', a << b) # left shift
    c = a
    print('c >> b:', c >> b) # logical right shift
    return 0
```
Please note that the above Python version will also print the correct bitwise NOT for negative numbers. The operator `>>` in C performs an arithmetic right shift. However, as far as bitwise operations are concerned, there's no such thing as a 'logical right shift'. Logical right shift is equivalent to signed right shift by 1 if number is signed.

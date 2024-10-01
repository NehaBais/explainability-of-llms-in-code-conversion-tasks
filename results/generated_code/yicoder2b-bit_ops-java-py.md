The equivalent code in Python would be as follows:

```python
def bitwise(a, b):
    print('a AND b:', a & b)
    print('a OR b:', a | b)
    print('a XOR b:', a ^ b)
    print('NOT a:', ~a)
    print('a << b:', a << b) # left shift
    print('a >> b:', a >> b) # arithmetic right shift
    print('a >>> b:', a >> b) # logical right shift
    print('a rol b:', a.__rlshift__(b)) # rotate left (Python 3 only)
    print('a ror b:', a.__rrshift__(b)) # rotate right (Python 3 only)
```

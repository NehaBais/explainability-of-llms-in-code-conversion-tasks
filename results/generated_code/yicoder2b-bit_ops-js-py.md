Sure, the equivalent Python code would be as follows:

```python
def bitwise(a,b):
    print('a AND b:', a & b) # Bitwise AND 
    print('a OR b:', a | b)  # Bitwise OR
    print('a XOR b:', a ^ b) # Bitwise exclusive OR 
    print('NOT a:', ~a if (~a >= 0) else ~a + 2**32) # bitwise NOT of a
    print('a << b:', a << b)  # Left shift
    print('a >> b:', a >> b) # Right shift 
    print('a >>> b:', a >> b if a >= 0 else -1 - (-a >> b)) # Arithmetic right shift
```

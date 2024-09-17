Here's the Python code that performs the same operations as the C code you provided:
```python
def bitwise(a, b):
 print("a and b:", a & b)
 print("a or b:", a | b)
 print("a xor b:", a ^ b)
 print("not a:", ~a)
 print("a << n:", a << b) # left shift
 print("a >> n:", a >> b) # on most platforms: arithmetic right shift
 c = a # convert the signed integer into unsigned, so it will perform logical shift
 print("c >> b:", c >> b) # logical right shift
 return 0
```
This Python function takes two integers `a` and `b` as input and performs bitwise operations on them. It prints the results of each operation to the console. Note that in Python, the left shift operator is represented by the `<<` symbol, and the right shift operator is represented by the `>>` symbol.


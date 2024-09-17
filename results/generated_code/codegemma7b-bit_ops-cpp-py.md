```python
def bitwise(a, b):
  print("a and b:", a & b)
  print("a or b:", a | b)
  print("a xor b:", a ^ b)
  print("not a:", ~a)

  print("a shl b:", a << b)
  print("a shr b:", a >> b)
  print("a lsr b:", a >> b)

  ua = a
  print("a rol b:", ua.__ror__(b))
  print("a ror b:", ua.__ror__(b))
```

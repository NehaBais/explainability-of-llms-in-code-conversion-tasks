```python
def bitwise(a, b):
  print("a and b:", a & b)
  print("a or b:", a | b)
  print("a xor b:", a ^ b)
  print("not a:", ~a)
  print("a << n:", a << b)  # left shift
  print("a >> n:", a >> b)  # on most platforms: arithmetic right shift
  c = unsigned(a)  # convert to unsigned for logical right shift
  print("c >> b:", c >> b)  # logical right shift
  return 0
```

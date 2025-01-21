Here is the Python equivalent of your C++ code:

```python
from operator import add, sub, mul
from functools import reduce
import numpy as np

def bitwise(a, b):
  print(f"a and b: {a & b}")
  print(f"a or b: {a | b}")
  print(f"a xor b: {a ^ b}")
  print(f"not a: {~a}")

  # Note: Python shift operators are not guaranteed to work if the shift count (that is, b)
  # is negative, or is greater or equal to the number of bits in the integer being shifted.
  print(f"a shl b: {a << b}")
  print(f"a shr b: {a >> b}")

  # Python does not have logical right shifts. This is a workaround using bitwise operations
  print(f"a lsr b: {(a & ((1 << 32) - 1)) >> b}")  # Assuming int has 32 bits

  print(f"a rol b: {np.left_shift(a, b)}")
  print(f"a ror b: {np.right_shift(a, b)}")

```

Please note that:
- Python does not have a built-in operator for bitwise right shifts. The `>>` operator performs an arithmetic right shift.
- Python's `numpy` library provides functions for bitwise left and right shifts (`left_shift()` and `right_shift()`) but it may not handle large integers correctly.
- `std::rotl()` and `std::rotr()` are not available in the standard Python library. If you need to use these, you would need to implement them yourself or find a third-party module that provides these functions.

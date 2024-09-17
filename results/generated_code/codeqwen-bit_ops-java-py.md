Here is the equivalent Python code for the given Java code:

```python
def bitwise(A, b):
    print("A AND b:", (A & b))
    print("A OR b:", (A | b))
    print("A XOR b:", (A ^ b))
    print("NOT a:", ~A)
    print("A << b:", (A << b)) # left shift
    print("A >> b:", (A >> b)) # arithmetic right shift
    # Python does not support logical right shift, so we use the floor division operator instead
    print("A >>> b:", (A >> b)) # logical right shift
    print("A rol b:", A << b) # rotate left
    # Python does not have a direct method to perform right rotation like Java 1.5+, but we can achieve this using bitwise operators.
    print("A ror b:", ((A >> b) | (A << (32 - b))) & ((2 ** 32) - 1)) # rotate right

# testing the function
bitwise(10, 3)
```
Please note that Python does not support bitwise rotations directly like Java. Instead, we use a workaround for right rotation using bitwise operations (in the last print statement).

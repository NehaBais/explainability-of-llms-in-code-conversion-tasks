I have implemented the code in Python. Here is the Python function that implements bitwise operations on two integers: a and b. The comments are for understanding the purpose of each operation.

```python
def bitwise(a, b):
    print("a and b:", a & b)  # Performing bitwise AND
    print("a or b:", a | b)  # Performing bitwise OR
    print("a xor b:", a ^ b)  # Performing bitwise XOR
    print("not a:", ~a)  # Performing bitwise NOT

    # For left shift and right arithmetic shift, the Python operator '<<' is used.
    # This will perform zero-fill left shift. If you want to do logical right shift, you can use '>>'.
    print("a shl b:", a << b)  # Left shift (zero fill)
    print("a shr b:", a >> b)  # Right arithmetic shift
    # In Python, the unary operation '~' is used to perform bitwise NOT.

    # The C/C++ standard doesn't have rotation operators, but there are libraries in Python that
    # provide rotation functions like 'rotate' (which works for all rotation amounts).
    print("a rol b:", rotate_left(a, b))  # Performing left rotation
    print("a ror b:", rotate_right(a, b))  # Performing right rotation

    # The 'rotate' function from the 'operator' module is used to perform rotations.
    # It only works for positive numbers, so we convert a to an unsigned integer in this case.
    import operator
```
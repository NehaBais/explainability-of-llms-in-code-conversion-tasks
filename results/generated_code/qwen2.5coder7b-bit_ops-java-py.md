Here is the Python equivalent of your Java code:

```python
def bitwise(a, b):
    print(f'a AND b: {a & b}')
    print(f'a OR b: {a | b}')
    print(f'a XOR b: {a ^ b}')
    print(f'NOT a: {~a}')
    print(f'a << b: {a << b}') # left shift
    print(f'a >> b: {a >> b}') # arithmetic right shift
    print(f'a >>> b: {a.bit_length() + (a >> b)}') # logical right shift

    # rotate left and right in Python is not as straightforward as in Java.
    # This function will be correct when 0 <= b < a.bit_length()
    def rol(n, k):
        return ((n << k) | (n >> (a.bit_length() - k))) & ((1 << a.bit_length()) - 1)

    def ror(n, k):
        return ((n >> k) | (n << (a.bit_length() - k))) & ((1 << a.bit_length()) - 1)

    print(f'a rol b: {rol(a, b)}') # rotate left
    print(f'a ror b: {ror(a, b)}') # rotate right
```

Note that Python's `bit_length()` method returns the number of bits necessary to represent an integer in binary, excluding the sign and leading zeros. The `&` operation is used to ensure the result fits within the same bit-width as the original number (by masking out any extraneous high-order bits).

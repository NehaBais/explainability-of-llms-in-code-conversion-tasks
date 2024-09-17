def bitwise_and_or_xor_not_shift_rotate(a, b):
    print(f"a AND b: {a & b}")
    print(f"a OR b: {a | b}")
    print(f"a XOR b: {a ^ b}")

    # For NOT operator, we need to convert the number to unsigned integer because in Python
    # it is not possible to apply bitwise NOT on negative integers
    a = a & 0xFFFFFFFF
    print(f"NOT a: {~a & 0xffffffff}")

    print(f"a << b: {a << b}")  # left shift
    print(f"a >> b: {a >> b}")  # arithmetic right shift

    # Python does not have built-in operator for unsigned right shift and rotate, so we need to define these functions
    def unsigned_right_shift(a, b):
        return (a & 0xFFFFFFFF) >> b if a >= 0 else (a + 0x100000000) >> b

    def rotate_right(a, b):
        a = a % 0x100000000  # ensure it is within the int32 range
        left_shifts = unsigned_right_shift(a, b)
        return (left_shifts << (32 - b)) | (a >> b)

    print(f"a >>> b: {unsigned_right_shift(a, b)}")
    print(f"a ror b: {rotate_right(a, b)}")

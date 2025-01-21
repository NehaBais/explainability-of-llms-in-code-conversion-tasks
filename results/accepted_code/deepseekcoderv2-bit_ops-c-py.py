def bitwise(a, b):
    print("a and b:", a & b)
    print("a or b:", a | b)
    print("a xor b:", a ^ b)
    print("not a:", ~a)
    print("a << n:", a << b)  # Left shift
    print("a >> n:", a >> b)  # Arithmetic right shift on most platforms

    # Logical right shift for Python (note: this is not the same as C's logical right shift)
    c = a & 0xFFFFFFFF  # Ensure the number is treated as unsigned in Python
    print("c >> n:", c >> b)  # Logical right shift

    # Left rotate and right rotate can be implemented using bitwise operations
    def left_rotate(value, shift):
        return (value << shift | value >> (32 - shift)) & 0xFFFFFFFF

    def right_rotate(value, shift):
        return (value >> shift | value << (32 - shift)) & 0xFFFFFFFF

    print("a left rotate n:", left_rotate(a, b))
    print("a right rotate n:", right_rotate(a, b))


# Example usage:
bitwise(5, 3)

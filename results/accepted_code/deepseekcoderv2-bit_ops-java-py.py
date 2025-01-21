def bitwise(a, b):
    print("a AND b:", a & b)
    print("a OR b:", a | b)
    print("a XOR b:", a ^ b)
    print("NOT a:", ~a)
    print("a << b:", a << b)  # left shift
    print("a >> b:", a >> b)  # arithmetic right shift
    print(
        "a >>> b:", a >> b
    )  # logical right shift (Python does not have separate operators for logical and arithmetic right shifts, both are performed as arithmetic right shifts)
    print("a rol b:", rotate_left(a, b))  # left rotate
    print("a ror b:", rotate_right(a, b))  # right rotate


def rotate_left(value, shift):
    bits = (
        value & 0xFFFFFFFF
    )  # Ensure the value is treated as a 32-bit unsigned integer
    return (bits << shift | bits >> (32 - shift)) & 0xFFFFFFFF


def rotate_right(value, shift):
    bits = (
        value & 0xFFFFFFFF
    )  # Ensure the value is treated as a 32-bit unsigned integer
    return (bits >> shift | bits << (32 - shift)) & 0xFFFFFFFF


# Example usage:
a = int(input("Enter first integer: "))
b = int(input("Enter second integer: "))
bitwise(a, b)

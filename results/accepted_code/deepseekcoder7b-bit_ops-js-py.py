def bitwise(a, b):
    print("a AND b: ", (a & b))  # Bitwise AND
    print("a OR b: ", (a | b))  # Bitwise OR
    print("a XOR b: ", (a ^ b))  # Bitwise XOR
    print("NOT a: ", ~a)  # Bitwise NOT, but in Python it will be -(a+1)
    print(
        "Left rotate of a by b positions : ", ((a << b) | (a >> (32 - b)))
    )  # Left Rotate
    print(
        "Right rotate of a by b positions: ", ((a >> b) | (a << (32 - b)) & 0xFFFFFFFF)
    )  # Right Rotate, for Python 32 bit integers.

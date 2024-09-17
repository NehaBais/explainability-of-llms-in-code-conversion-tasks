def bitwise(a, b):
    print("a and b:", a & b)
    print("a or b:", a | b)
    print("a xor b:", a ^ b)

    # Python equivalent of bitwise NOT operator
    print("not a (Python's workaround):", ~a + (1 << 32))

    print("a << n:", a << b)  # left shift
    print("a >> n:", a >> b)  # arithmetic right shift

    c = a & 0xFFFFFFFF  # convert to unsigned int for logical right shift
    print("c >> n:", c >> b)  # logical right shift


def rotate(a, b):
    print("Left rotate:", (a << b) | (a >> 32 - b))  # left rotate
    print("Right rotate:", (a >> b) | (a << 32 - b))  # right rotate

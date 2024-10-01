def bitwise(a, b):
    print("a and b: ", a & b)
    print("a or b: ", a | b)
    print("a xor b: ", a ^ b)
    print("not a: ", ~a)
    print("a << n: ", a << b)  # left shift
    print("a >> n: ", a >> b)  # arithmetic right shift
    c = a
    print("c >> b (logical): ", c >> b)  # logical right shift

    # Implementing bitwise rotate
    mask = 2**31 - 1  # A mask to truncate the rotate operation result to 32 bits.
    print("a left rotated by b: ", ((a << b) | (a >> (32 - b))) & mask)  # left rotation
    print(
        "a right rotated by b: ", ((a >> b) | (a << (32 - b))) & mask
    )  # right rotation

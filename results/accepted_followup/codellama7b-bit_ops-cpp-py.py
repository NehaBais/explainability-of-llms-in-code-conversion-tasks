def bitwise(a, b):
    # Bitwise AND
    print("a and b:", (a & b))

    # Bitwise OR
    print("a or b:", (a | b))

    # Bitwise XOR
    print("a xor b:", (a ^ b))

    # Bitwise NOT
    print("not a:", ~a)

    # Left shift
    print("a shl b:", (a << b))

    # Right shift (arithmetic)
    print("a shr b:", (a >> b))

    # Right shift (logical)
    ua = a
    print("a lsr b:", (ua >> b))

    # Rotate left
    print("a rol b:", std.rotl(ua, b))

    # Rotate right
    print("a ror b:", std.rotr(ua, b))

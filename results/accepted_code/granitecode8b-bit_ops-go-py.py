def bitwise(a, b):
    print("a:", bin(a)[2:].zfill(16))
    print("b:", bin(b)[2:].zfill(16))

    # Bitwise logical operations
    print("and:", bin((a & b) & 0xFFFF)[2:].zfill(16))
    print("or:", bin((a | b) & 0xFFFF)[2:].zfill(16))
    print("xor:", bin((a ^ b) & 0xFFFF)[2:].zfill(16))
    print("not:", bin(~a)[2:].zfill(16))

    # Logical shifts (unsigned left operand)
    print("shl:", bin((a << b) & 0xFFFF)[2:].zfill(16))
    print("shr:", bin((a >> b) & 0xFFFF)[2:].zfill(16))

    # Arithmetic shifts (signed left operand)
    print("las:", bin((a << b) & 0xFFFF)[2:].zfill(16))
    print("ras:", bin((a >> b) & 0xFFFF)[2:].zfill(16))

    # Rotations
    ror_mask = (1 << b) - 1
    rol_mask = ~ror_mask
    print("rol:", bin((a << b) & rol_mask | (a >> (16 - b)))[2:].zfill(16))
    print("ror:", bin((a >> b) & ror_mask | (a << (16 - b)))[2:].zfill(16))


bitwise(-460, 6)

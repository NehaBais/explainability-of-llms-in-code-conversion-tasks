def bitwise(a, b):
    a = uint16(a)
    b = uint32(b)

    print("a:", bin(a))
    print("b:", bin(b))

    # Bitwise logical operations
    print("and:", bin(a & b))
    print("or:", bin(a | b))
    print("xor:", bin(a ^ b))
    print("not:", bin(~a))

    if b < 0:
        print(
            "Right operand is negative, but all shifts require an unsigned right operand (shift distance)."
        )
        return

    # Logical shifts (unsigned left operand)
    print("shl:", bin(a << b))
    print("shr:", bin(a >> b))

    # Arithmetic shifts (signed left operand)
    print("las:", bin(a << b))
    print("ras:", bin(a >> b))

    # Rotations
    ror = int16(int16(uint16(a >> b)) | a << (16 - b))
    rol = uint16(a << b | int16(uint16(a) >> (16 - b)))
    print("rol:", bin(rol))
    print("ror:", bin(ror))

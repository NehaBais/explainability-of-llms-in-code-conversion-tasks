def bitwise(a, b):
    print("a:   {}".format(bin(a)[2:]))
    print("b:   {}".format(bin(b & 0xFFFF)[2:]))

    # Bitwise logical operations
    and_res = a & b
    print("and: {}".format(bin(and_res & 0xFFFF)[2:]))

    or_res = a | b
    print("or:  {}".format(bin(or_res & 0xFFFF)[2:]))

    xor_res = a ^ b
    print("xor: {}".format(bin(xor_res & 0xFFFF)[2:]))

    not_a = ~a
    print("not: {}".format(bin(not_a & 0xFFFF)[2:]))

    if b < 0:
        print(
            "Right operand is negative, but all shifts require an unsigned right operand (shift distance)."
        )
        return

    ua = a & 0xFFFF
    ub = b & 0xFFFF

    # Logical shifts (unsigned left operand)
    shl_res = ua << ub
    print("shl: {}".format(bin(shl_res & 0xFFFF)[2:]))

    shr_res = ua >> ub
    print("shr: {}".format(bin(shr_res & 0xFFFF)[2:]))

    # Arithmetic shifts (signed left operand)
    las_res = a << ub
    print("las: {}".format(bin(las_res & 0xFFFF)[2:]))

    ras_res = a >> ub
    print("ras: {}".format(bin(ras_res & 0xFFFF)[2:]))

    # Rotations
    rol_res = (a << b) | (
        (a >> (16 - b)) if (a >> (16 - b)) >= 0 else (a >> (16 - b)) + 65536
    )
    print("rol: {}".format(bin(rol_res & 0xFFFF)[2:]))

    ror_res = ((a << (16 - b)) | a >> b if a < 0 else a >> b) % 65536
    print("ror: {}".format(bin(ror_res & 0xFFFF)[2:]))


a, b = -460, 6
bitwise(a, b)

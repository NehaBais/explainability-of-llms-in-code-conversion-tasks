def bitwise(a, b):
    print(f"a:   {a:016b}")
    print(f"b:   {b:016b}")

    # Bitwise logical operations
    print(f"and: {a & b:016b}")
    print(f"or:  {a | b:016b}")
    print(f"xor: {a ^ b:016b}")
    print(f"not: {~a & 0xFFFF:016b}")

    if b < 0:
        print(
            "Right operand is negative, but all shifts require an unsigned right operand (shift distance)."
        )
        return

    # Logical shifts (unsigned left operand)
    print(f"shl: {a << b:016b}")
    print(f"shr: {a >> b:016b}")

    # Arithmetic shifts (signed left operand)
    print(f"las: {a << b:016b}")
    print(f"ras: {a >> b:016b}")

    # Rotations
    print(f"rol: {(a << b) | (a >> (16 - b)):016b}")
    print(f"ror: {(a >> b) | (a << (16 - b)):016b}")

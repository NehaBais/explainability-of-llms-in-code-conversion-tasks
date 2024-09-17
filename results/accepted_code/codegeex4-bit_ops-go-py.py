def bitwise(a: int, b: int):
    print(f"a:   {a:016b}")
    print(f"b:   {b:016b}")

    # Bitwise logical operations
    print(f"and: {a&b:016b}")
    print(f"or:  {a|b:016b}")
    print(f"xor: {a^b:016b}")
    print(f"not: {~a:016b}")

    if b < 0:
        print(
            "Right operand is negative, but all shifts require an unsigned right operand (shift distance)."
        )
        return

    ua = a & 0xFFFF
    ub = b

    # Logical shifts (unsigned left operand)
    print(f"shl: {ua<<ub:016b}")
    print(f"shr: {ua>>ub:016b}")

    # Arithmetic shifts (signed left operand)
    print(f"las: {a<<ub:016b}")
    print(f"ras: {a>>ub:016b}")

    # Rotations
    print(f"rol: {(a<<ub)|(a>>(16-ub)&0xffff):016b}")
    print(f"ror: {(a>>ub)|(a<<(16-ub)&0xffff):016b}")


if __name__ == "__main__":
    a, b = -460, 6
    bitwise(a, b)

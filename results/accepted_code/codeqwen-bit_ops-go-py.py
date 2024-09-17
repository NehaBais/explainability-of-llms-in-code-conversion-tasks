def bitwise(A, B):
    print("A:{0:016b}".format(abs(A)))
    print("B:{0:016b}".format(abs(B)))

    # Bitwise logical operations
    print("and: {0:016b}".format(A & B))
    print("or:  {0:016b}".format(A | B))
    print("xor: {0:016b}".format(A ^ B))
    print("not: {0:016b}".format(~A))

    if B < 0:
        print(
            "Right operand is negative, but all shifts require an unsigned right operand (shift distance)."
        )
        return

    ua = abs(A)
    ub = abs(B)

    # Logical shifts (unsigned left operand)
    print("shl: {0:016b}".format(ua << ub))
    print("shr: {0:016b}".format(ua >> ub))

    # Arithmetic shifts (signed left operand)
    print("las: {0:016b}".format(A << ub))
    print("ras: {0:016b}".format(A >> ub))

    # Rotations
    print("rol: {0:016b}".format((A << ub | A >> (16 - ub)) & 0xFFFF))
    print("ror: {0:016b}".format((A >> ub | A << (16 - ub)) & 0xFFFF))


if __name__ == "__main__":
    A, B = -460, 6
    bitwise(A, B)

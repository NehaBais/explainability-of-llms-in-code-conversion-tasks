def bitwise(a, b):
    print("a:   {:016b}".format(a))
    print("b:   {:016b}".format(b))

    # Bitwise logical operations
    print("and: {:016b}".format(a & b))
    print("or:  {:016b}".format(a | b))
    print("xor: {:016b}".format(a ^ b))
    print("not: {:016b}".format(~a))

    if b < 0:
        print(
            "Right operand is negative, but all shifts require an unsigned right operand (shift distance)."
        )
        return

    ua = a
    ub = b

    # Logical shifts (unsigned left operand)
    print("shl: {:016b}".format(ua << ub))
    print("shr: {:016b}".format(ua >> ub))

    # Arithmetic shifts (signed left operand)
    print("las: {:016b}".format(a << ub))
    print("ras: {:016b}".format(a >> ub))

    # Rotations
    print("rol: {:016b}".format((ua << ub | a >> (16 - ub))))
    print("ror: {:016b}".format((int(ua >> ub) | a << (16 - ub))))


if __name__ == "__main__":
    bitwise(-460, 6)

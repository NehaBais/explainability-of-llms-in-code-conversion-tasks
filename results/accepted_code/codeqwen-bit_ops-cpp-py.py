def bitwise(A, b):
    print("A and b:", A & b)
    print("A or b: ", A | b)
    print("A xor b: ", A ^ b)
    print("not A:   ", ~A)

    # Note: The C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
    # Is negative, or is greater or equal to the number of bits in the integer being shifted.
    print("A shl b: ", A << b)
    print("A shr b: ", A >> b)  # typically arithmetic right shift, but not guaranteed
    ua = A
    print("A lsr b: ", ua >> b)  # logical right shift (guaranteed)

    # there are no rotation operators in Python, but as of Python 3.8 there is a standard-library rotate function.
    # The rotate function works for all rotation amounts, but the integer being rotated must always be an
    # unsigned integer.
    print(
        "A rol b: ", (ua << b) & ((1 << 32) - 1)
    )  # Python doesn't support arbitrary-bit rotation, so use this trick to simulate it
    print("A ror b: ", (ua >> b) | (ua << (32 - b)))

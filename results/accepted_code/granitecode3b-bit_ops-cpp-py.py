def bitwise(a, b):
    print(
        "a and b:", a & b
    )  # Note: parentheses are needed because & has lower precedence than <<
    print("a or b:", a | b)
    print("a xor b:", a ^ b)
    print("not a:", ~a)

    # Note: the C/C++ shift operators are not guaranteed to work if the shift count (that is, b)
    # is negative, or is greater or equal to the number of bits in the integer being shifted.
    print("a shl b:", a << b)  # Note: "<<" is used both for output and for left shift
    print("a shr b:", a >> b)  # typically arithmetic right shift, but not guaranteed

    ua = a
    print("a lsr b:", ua >> b)  # logical right shift (guaranteed)

    # there are no rotation operators in C++, but as of c++20 there is a standard-library rotate function.
    # The rotate function works for all rotation amounts, but the integer being rotated must always be an
    # unsigned integer.
    print("a rol b:", std.rotl(ua, b))
    print("a ror b:", std.rotr(ua, b))

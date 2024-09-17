def bitwise(a, b):
    print("a and b:", a & b)  # Bitwise AND
    print("a or b:", a | b)  # Bitwise OR
    print("a xor b:", a ^ b)  # Bitwise XOR

    print("not a:", ~a))  # Bitwise NOT

    print("a shl b:", a << b))  # Left shift (C++ only allows left shift with an unsigned integer)
    print("a shr b:", a >> b))  # Right shift (guaranteed in C++)

    ua = a
    print("a lsr b:", ua >> b))  # Logical right shift (guaranteed in Python))

    print("a rol b:", std::rotl(ua, b)))  # Rotate left
    print("a ror b:", std::rotr(ua, b)))  # Rotate right
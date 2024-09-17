def bitwise(a, b):
    print(
        bin(a & b)
    )  # Note: parentheses are needed because & has lower precedence than <<
    print(bin(a | b))
    print(bin(a ^ b))
    print(~a)  # Bitwise NOT operator

    # Note: the Python shift operators will work regardless of the sign or size of b.
    print(bin(a << b))  # Left shift
    print(bin(a >> b))  # Right arithmetic shift
    ua = a.to_bytes(
        (a.bit_length() + 7) // 8, byteorder="big"
    )  # Convert to bytes for logical right shift.
    ui = int.from_bytes(ua, byteorder="big")
    print(ui >> b)

    # There is no built-in rotation operator in Python. We'll need to implement our own function.
    def rol(value, n, bits):
        return (value << n % bits) | (value >> (bits - n % bits))

    def ror(value, n, bits):
        return (value >> n % bits) | (value << (bits - n % bits))

    print(rol(ui, b, ui.bit_length()))
    print(ror(ui, b, ui.bit_length()))

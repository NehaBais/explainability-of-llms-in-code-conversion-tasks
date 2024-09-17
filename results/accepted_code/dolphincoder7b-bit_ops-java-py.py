def bitwise(a, b):
    print("a AND b: ", a & b)
    print("a OR b: ", a | b)
    print("a XOR b: ", a ^ b)
    print("NOT a: ", ~a)
    print("a  << b: ", a << b)  # left shift
    print("a  >> b: ", a >> b)  # arithmetic right shift
    print("a >>> b: ", a >> b)  # logical right shift
    print(
        "a rol b: ",
        int.from_bytes(
            a.to_bytes(4, "little")[-1:] + a.to_bytes(3, "big")[0:-1],
            byteorder="big",
            signed=True,
        ),
    )  # rotate left
    print(
        "a ror b: ",
        int.from_bytes(
            (a >> 24) & 255 | (a >> 8) & ((1 << 24) - 1), byteorder="big", signed=True
        ),
    )  # rotate right

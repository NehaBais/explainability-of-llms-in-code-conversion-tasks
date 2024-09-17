def bitwise(a, b):
    print("a and b:", a & b)
    print("a or b:", a | b)
    print("a xor b:", a ^ b)
    print(
        "not a:", ~a & 0xFFFFFFFF
    )  # bitwise AND with 0xFFFFFFFF to ensure it's an unsigned integer in case of negative numbers

    print(f"a << {b}:", a << b)
    print(f"a >> {b}:", a >> b)

    c = (
        a & 0xFFFFFFFF
    )  # bitwise AND with 0xFFFFFFFF to ensure it's an unsigned integer in case of negative numbers
    print(f"c >> {b}:", c >> b)

    if a < 0:
        print(
            "Left rotate: ", ((-a) << b | (-a & ((1 << b) - 1))) & 0xFFFFFFFF
        )  # left rotation equivalent with bitwise AND and OR operations
    else:
        print(
            "Right rotate:", a >> b | (a & ((1 << b) - 1))
        )  # right rotation equivalent with bitwise OR operation

    return 0

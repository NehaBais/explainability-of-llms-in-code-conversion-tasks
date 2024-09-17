def bitwise(a, b):
    print("a and b:", a & b)
    print("a or b:", a | b)
    print("a xor b:", a ^ b)
    print("not a:", ~a)
    print("a left shift b:", a << b)  # left shift
    print("a right shift b (arithmetic):", a >> b)  # arithmetic right shift
    c = (
        a if a >= 0 else ~(a - 1)
    )  # convert the signed integer into unsigned, so it will perform logical right shift
    print("c right shift b (logical):", c >> b)  # logical right shift
    return

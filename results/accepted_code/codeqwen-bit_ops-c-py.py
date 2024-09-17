def bitwise(A, b):
    print("a and b:", A & b)
    print("A or b:", A | b)
    print("A xor b:", A ^ b)
    print("not A:", ~A)
    print("A << n:", A << b)  # left shift
    print("A >> n:", A >> b)  # arithmetic right shift

    # convert the signed integer into unsigned, so it will perform logical shift
    c = A
    print("c >> b:", c >> b)  # logical right shift

    return 0

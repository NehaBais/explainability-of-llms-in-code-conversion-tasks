def bitwise(a, b):
    print("a and b:", a & b)
    print("a or b:", a | b)
    print("a xor b:", a ^ b)
    print("not a:", ~a)
    print("a << n:", a << b)  # left shift
    print("a >> n:", a >> b)  # on most platforms: arithmetic right shift
    c = a  # convert the signed integer into unsigned, so it will perform logical shift
    print("c >> b:", c >> b)  # logical right shift
    return 0

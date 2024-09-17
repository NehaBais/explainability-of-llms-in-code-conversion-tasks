def bitwise(a, b):
    print("a and b:", a & b)
    print("a or b:", a | b)
    print("a xor b:", a ^ b)
    print("not a:", ~a)
    print("a shl b:", a << b)
    print("a shr b:", a >> b)  # arithmetic right shift
    print("a lsr b:", a >> b)  # logical right shift
    print("a rol b:", (a << b) | (a >> (32 - b)))  # left rotate
    print("a ror b:", (a >> b) | (a << (32 - b)))  # right rotate

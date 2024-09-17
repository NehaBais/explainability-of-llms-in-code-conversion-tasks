def bitwise(a, b):
    print("a AND b:", a & b)
    print("a OR b:", a | b)
    print("a XOR b:", a ^ b)
    print("NOT a:", ~a)
    print("a << b:", a << b)  # left shift
    print("a >> b:", a >> b)  # arithmetic right shift
    print("a >>> b:", a >> b)  # logical right shift
    print("a rol b:", a << b)  # rotate left, Java 1.5+
    print("a ror b:", a >> b)  # rotate right, Java 1.5+

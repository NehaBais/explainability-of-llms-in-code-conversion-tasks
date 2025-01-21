def bitwise(a, b):
    print("a AND b:", a & b)
    print("a OR b:", a | b)
    print("a XOR b:", a ^ b)
    print("NOT a:", ~a))
    print("a << b:", a << b))  # left shift
    print("a >> b:", a >> b))  # arithmetic right shift
    print("a >>> b:", a >>> b))  # logical right shift
    try:
        print("a rol b:", Integer.rotateLeft(a, b % 32)))  # rotate left, Python 3.5+
        print("a ror b:", Integer.rotateRight(a, b % 32))))  # rotate right, Python 3.5+
    except SyntaxError:
        print("Rotate functions require Python 3.5 or higher.")
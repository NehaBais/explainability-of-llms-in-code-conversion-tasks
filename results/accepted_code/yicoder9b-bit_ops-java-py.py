def bitwise(a, b):
    print("a AND b:", a & b)
    print("a OR b:", a | b)
    print("a XOR b:", a ^ b)
    print(
        "NOT a:", ~a
    )  # This may cause overflow issue if the result is not within the range of int.
    print("a << b:", a << b)  # left shift
    print("a >> b:", a // 2**b)  # arithmetic right shift
    print("a rol b:", (a << b | a >> (32 - b)))  # rotate left
    print("a ror:", (a >> b | a << (32 - b)))  # rotate right

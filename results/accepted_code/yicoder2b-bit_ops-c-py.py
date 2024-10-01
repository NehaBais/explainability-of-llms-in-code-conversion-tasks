def bitwise(a, b):
    print("a & b:", a & b)
    print("a | b:", a | b)
    print("a ^ b:", a ^ b)
    print(
        "~a:", ~a if a >= 0 else -(abs(a + 1))
    )  # bitwise NOT for negative numbers is equivalent to signed right shift by 1
    print("a << b:", a << b)  # left shift
    c = a
    print("c >> b:", c >> b)  # logical right shift
    return 0

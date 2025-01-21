def bitwise(a, b):
    print(f"a AND b: {a & b}")
    print(f"a OR b: {a | b}")
    print(f"a XOR b: {a ^ b}")
    print(f"NOT a: {~a}")
    print(f"a << b: {a << b}")  # left shift
    print(f"a >> b: {a >> b}")  # arithmetic right shift
    print(f"a >>> b: {a >> b}")  # logical right shift


bitwise(5, 2)

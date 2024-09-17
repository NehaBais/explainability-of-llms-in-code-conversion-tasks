def bitwise(a, b):
    print(f"a and b: {a & b}")
    print(f"a or b: {a | b}")
    print(f"a xor b: {a ^ b}")
    print(f"not a: {~a}")
    print(f"a << n: {a << b}")  # left shift
    print(f"a >> n: {a >> b}")  # on most platforms: arithmetic right shift
    # convert the signed integer into unsigned, so it will perform logical shift
    c = a + (2**32 if a < 0 else 0)
    print(f"c >> b: {c >> b}")  # logical right shift
    # there are no rotation operators in Python, but we can use bit shifting to simulate it
    rotated_left = ((a << b) & 0xFFFFFFFF) | (a >> (32 - b))
    rotated_right = ((a >> b) & 0xFFFFFFFF) | (a << (32 - b))
    print(f"a rotated left: {rotated_left}")
    print(f"a rotated right: {rotated_right}")


bitwise(10, 2)

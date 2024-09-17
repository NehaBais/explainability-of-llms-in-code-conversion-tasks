def bitwise(a, b):
    print("a AND b: ", a & b)
    print("a OR b: ", a | b)
    print("a XOR b: ", a ^ b)
    print("NOT a: ", ~a)
    print("a << b: ", a << b)  # left shift
    print("a >> b: ", a >> b)  # arithmetic right shift
    print("a & (a >> b): ", a & (a >> b))  # logical right shift
    print(
        f"a rotr {b}: ", ((a * (31 % b)) | (a >> b))
    )  # rotate right, Python doesn't have a built in function for this so we use a combination of '*' and '/' operators to emulate it.
    print(
        f"a rotl {b}: ", ((a << (b & 0x1F)) | (a >> (32 - b)))
    )  # rotate left, Python doesn't have a built in function for this so we use a combination of '<<' and '>>' operators to emulate it.

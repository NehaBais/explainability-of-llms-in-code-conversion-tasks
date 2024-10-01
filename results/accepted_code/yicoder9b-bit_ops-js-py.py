def bitwise(a, b):
    print("a AND b: " + str(a & b))
    print("a OR b: " + str(a | b))
    print("a XOR b: " + str(a ^ b))
    print("NOT a: " + str(~a))
    print("a << b: " + str(a << b))  # left shift
    print(
        "a >> b: " + str(a // 2**b)
    )  # arithmetic right shift (integer division by power of two)
    # logical right shift and rotate implemented manually below, since they are not built-in operations in Python.
    bits = bin(a)[2:]  # binary representation of a as a string
    bits = "0" * (32 - len(bits)) + bits  # padding with leading zeros to make length 32
    new_bits = (bits[b:] + bits[:b])[::-1]  # rotate right and reverse
    print(
        "a >>> b logical right rotate : " + str(int(new_bits, 2))
    )  # convert binary string back into integer


bitwise(50, 3)

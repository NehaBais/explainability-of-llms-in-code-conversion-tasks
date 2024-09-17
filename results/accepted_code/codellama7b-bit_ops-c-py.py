def bitwise(a, b):
    # Perform the bitwise AND operation on a and b
    result_and = a & b

    # Perform the bitwise OR operation on a and b
    result_or = a | b

    # Perform the bitwise XOR operation on a and b
    result_xor = a ^ b

    # Perform the bitwise NOT operation on a
    result_not = ~a

    # Perform a left shift of a by n bits, where n is the value of b
    result_left_shift = a << b

    # Perform an arithmetic right shift of a by n bits, where n is the value of b
    result_right_shift = a >> b

    # Perform a logical right shift of c (which is the same as a) by n bits, where n is the value of b
    result_logical_right_shift = c >> b

    # Print the results
    print(f"a and b: {result_and}")
    print(f"a or b: {result_or}")
    print(f"a xor b: {result_xor}")
    print(f"not a: {result_not}")
    print(f"a << n: {result_left_shift}")
    print(f"a >> n: {result_right_shift}")
    print(f"c >> b: {result_logical_right_shift}")

    return 0

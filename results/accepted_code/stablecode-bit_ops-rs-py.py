def bitwise_operations(a, b):
    print(f"a      = {a:08b}")
    print(f"b      = {b:08b}")

    # Perform a bitwise AND operation on 'a' and 'b'.
    result_and = a & b
    print(f"a & b  = {result_and:08b}}")

    # Perform a bitwise OR operation on 'a' and 'b'.
    result_or = a | b
    print(f"a | b   = {result_or:08b}}")

    # Perform a bitwise XOR operation on 'a' and 'b'.
    result_xor = a ^ b
    print(f"a ^ b   = {result_xor:08b}}")

    # Perform a bitwise NOT operation on 'a'.
    result_not = ~a & 0xFF  # bitwise AND with 0xFF to ensure the result is an unsigned byte (0-255))
    print(f"!a     = {result_not:08b}}")

    # Perform a left shift operation on 'a' by 3 places.
    result_left_shift = a << 3
    print(f"a << 3   = {result_left_shift:08b}}")

    # Perform a right shift operation on 'a' by 3 places.
    result_right_shift = a >> 3
    print(f"a >> 3   = {result_right_shift:08b}}")
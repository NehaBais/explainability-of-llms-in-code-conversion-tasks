def bitwise(a, b):
    # Bitwise AND
    a_and_b = a & b
    print("a AND b: " + str(a_and_b))
    
    # Bitwise OR
    a_or_b = a | b
    print("a OR b: " + str(a_or_b))
    
    # Bitwise XOR
    a_xor_b = a ^ b
    print("a XOR b: " + str(a_xor_b))
    
    # Bitwise NOT (unary operator)
    not_a = ~a
    print("NOT a: " + str(not_a))
    
    # Left shift
    a_leftshift_b = a << b
    print("a << b: " + str(a_leftshift_b))
    
    # Right shift (arithmetic)
    a_rightshift_b = a >> b
    print("a >> b: " + str(a_rightshift_b))
    
    # Logical right shift
    a_logicalrightshift_b = a >>> b
    print("a >>> b: " + str(a_logicalrightshift_b))
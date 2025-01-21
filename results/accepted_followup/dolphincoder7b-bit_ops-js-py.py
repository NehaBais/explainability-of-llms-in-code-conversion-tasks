def bitwise(a, b):
     # Perform AND operation
    and_result = (a & b)
    print("a AND b:", and_result)

     # Perform OR operation
    or_result = (a | b)
    print("a OR b:", or_result)

     # Perform XOR operation
    xor_result = (a ^ b)
    print("a XOR b:", xor_result)

     # Perform NOT operation
    not_result = (~a)
    print("NOT a:", not_result)

     # Perform left shift operation
    left_shift = (a << b)
    print("a   << b:", left_shift)

     # Perform right arithmetic shift operation
    right_arithmetic_shift = (a >> b)
    print("a   >> b:", right_arithmetic_shift)

     # Perform right logical shift operation
    right_logical_shift = (a >>> b)
    print("a   >>> b:", right_logical_shift)

bitwise(10, 20)
def boolean_ops(a, b):
    print(f"{a} and {b} -> {a and b}")
    print(f"{a} or {b} -> {a or b}")
    # XOR operation in python can be done with '^' operator but it works differently than in some other languages.
    # For instance, True ^ True = False in Python not True as in maths, so we will comment out this line.
    # print(f"{a} xor {b} -> {a ^ b}")
    print(f"not {a} -> {not a}")


boolean_ops(True, True)
boolean_ops(True, False)
boolean_ops(False, True)
boolean_ops(False, False)

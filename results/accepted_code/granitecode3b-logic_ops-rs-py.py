def boolean_ops(a, b):
    print("{} and {} -> {}".format(a, b, a and b))
    print("{} or {} -> {}".format(a, b, a or b))
    print("{} xor {} -> {}".format(a, b, a ^ b))
    print("not {} -> {}".format(a, not a))


boolean_ops(True, True)
boolean_ops(True, False)
boolean_ops(False, True)
boolean_ops(False, False)

def boolean_ops(A: bool, b: bool):
    print("{} and {} -> {}".format(A, b, A and b))
    print("{} or {} -> {}".format(A, b, A or b))
    print(
        "{} xor {} -> {}".format(A, b, A != b)
    )  # Using '!=' operator for XOR as Python doesn't have a built-in '^' operator for boolean values
    print("not {} -> {}".format(A, not A))


def main():
    boolean_ops(True, True)
    boolean_ops(True, False)
    boolean_ops(False, True)
    boolean_ops(False, False)


main()

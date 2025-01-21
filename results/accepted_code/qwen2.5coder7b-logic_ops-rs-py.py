def boolean_ops(a: bool, b: bool):
    print("{} and {} -> {}".format(a, b, a and b))
    print("{} or {} -> {}".format(a, b, a or b))
    # Python doesn't have XOR operator like Rust, so we use != to simulate it
    print("{} xor {} -> {}".format(a, b, a != b))
    print("not {} -> {}".format(a, not a))


def main():
    boolean_ops(True, True)
    boolean_ops(True, False)
    boolean_ops(False, True)
    boolean_ops(False, False)


if __name__ == "__main__":
    main()

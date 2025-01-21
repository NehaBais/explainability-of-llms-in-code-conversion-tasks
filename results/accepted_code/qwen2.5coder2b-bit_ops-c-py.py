def bitwise(a, b):
    print("a & b: ", a & b)
    print("a | b: ", a | b)
    print("a ^ b: ", a ^ b)
    print("not a: ", ~a)

    c = a
    print("c >> b: ", c >> b)

    # Python does not have left rotate and right rotate operations as in C,
    # but you can achieve similar results using the XOR and shift operators.
    # Here, we simulate the behavior of left rotate by left-shifting and right rotate
    # by right-shifting, then applying bitwise OR to combine these results.

    # Left Rotate:
    rotated_left = (c << b) | (~c & ((1 << b) - 1))
    print("left rotate: ", rotated_left)

    # Right Rotate:
    rotated_right = (c >> b) | ((~c & ((1 << b) - 1)) << b)
    print("right rotate: ", rotated_right)


# Example usage
bitwise(5, 2)

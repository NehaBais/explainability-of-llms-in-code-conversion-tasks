from itertools import cycle


def bitwise(a, b):
    print("a and b: ", a & b)
    print("a or b:  ", a | b)
    print("a xor b: ", a ^ b)
    print("not a:   ", ~a)

    # bitwise shift operation is same in python as c++.
    print(f"a shl {b}: ", a << b)
    if b < 0 or b >= 32:
        print("Warning: the shift count should be positive and less than 32")
    else:
        print("a shr b: ", a >> b)

    # convert to unsigned int for logical right shift operation.
    ua = a & 0xFFFFFFFF

    if b < 0 or b >= 32:
        print("Warning: the rotation count should be positive and less than 32")
    else:
        # Use zip function with slicing to achieve rotation operation.
        # In Python, a rotation operation is essentially equivalent to repeated concatenation of the number.
        # We take advantage of this property by zipping together our number with itself, then taking every b-th element.
        print(
            f"a lsr {b}: ",
            "".join(
                [str(int(bit)) for bit in list(zip(*cycle(str(ua))))[b :: len(str(ua))]]
            ),
        )

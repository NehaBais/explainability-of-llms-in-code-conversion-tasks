def bitwise(a, b):
    print("a & b:", a & b)
    print("a | b:", a | b)
    print("a ^ b:", a ^ b)

    # The bitwise NOT operator is available directly in Python
    print("~a:", ~a)

    # Note: Python's bitwise shift operators behave differently from C/C++.
    # For a right shift, the result of shifting by a negative number is undefined.
    # For right arithmetic shift (also known as "arithmetic right shift"), the bits are filled with zeros
    # if the leftmost bit is 1. For left shift and right rotate operations in Python,
    # these functions exist in the `operator` module.

    print("a << b:", a << b)
    print("a >> b:", a >> b)

    # Python has no built-in functions for rotating an integer, so you would have to
    # write your own or use a library that supports this functionality.

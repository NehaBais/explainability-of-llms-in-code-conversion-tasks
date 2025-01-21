def bitwise(a, b):
    print(f"a & b: {a & b}")
    print(f"a | b: {a | b}")
    print(f"a ^ b: {a ^ b}")
    print(f"~a: {~a}")
    print(f"a << b: {a << b}")  # left shift
    print(f"a >> b: {a >> b}")  # arithmetic right shift
    print(f"a >>> b: {a >> b}")  # logical right shift
    print(f"a rol b: {a << b}")  # rotate left, Python doesn't have it natively
    print(f"a ror b: {a >> b}")  # rotate right, Python doesn't have it natively


# For the rotate_left and rotate_right functions, we need a library like math which isn't available in python
from math import *


def rotate_left(a, b):
    return (a << b) | (a >> (32 - b))


def rotate_right(a, b):
    return (a >> b) | (a << (32 - b))


bitwise(10, 4)

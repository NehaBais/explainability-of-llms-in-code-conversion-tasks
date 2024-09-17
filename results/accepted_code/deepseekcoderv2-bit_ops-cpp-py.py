# Cpp program to illustrate bitwise operators
def AND(a, b):
    print("a & b = ", a & b)


def OR(a, b):
    print("a | b = ", a | b)


def XOR(a, b):
    print("a ^ b = ", a ^ b)


def ONES_COMPLEMENT(a):
    return ~a & ((1 << 32) - 1)


def LEFT_SHIFT(b):
    # print ("Left Shift of b is", b << 1 )
    print("Left shift by %d = " % b, a << b)


def RIGHT_SHIFT(b):
    # print ("Right Shift of b is", b >> 1)
    print("Right shift by %d = " % b, a >> b)


# Driver code
a = 56
b = 20
AND(a, b)
OR(a, b)
XOR(a, b)
print("Ones Complement of", a, "is", ONES_COMPLEMENT(a))
LEFT_SHIFT(b)
RIGHT_SHIFT(b)

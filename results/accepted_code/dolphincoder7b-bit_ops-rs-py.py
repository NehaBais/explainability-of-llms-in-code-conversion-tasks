import operator


def main():
    a = 105
    b = 91
    print(f"a      = {bin(a)}")
    print(f"b      = {bin(b)}")
    print(f"a | b   = {bin(operator.bitwise_or(a, b))}")
    print(f"a & b   = {bin(operator.bitwise_and(a, b))}")
    print(f"a ^ b   = {bin(operator.bitwise_xor(a, b))}")
    print(f"!a      = {bin(~a)}")
    print(f"a << 3  = {bin(a << 3)}")
    print(f"a >> 3  = {bin(a >> 3)}")

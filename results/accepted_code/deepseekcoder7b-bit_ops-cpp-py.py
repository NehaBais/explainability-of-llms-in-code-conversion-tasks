def bitwise(a, b):
    print("a and b: ", a & b)
    print("a or b:  ", a | b)
    print("a xor b: ", a ^ b)

    # Python doesn't support bitwise NOT on floats/complex numbers; it supports only integers.
    try:
        print("not a:    ", ~a)
    except Exception as e:
        print(e)

    print("a shl b: ", a << b)
    print("a shr b: ", a >> b)

    # Python's right shift operator performs arithmetic shift for negative numbers which is the same as logical shift in C/C++.
    ua = a & 0xFFFFFFFF  # Mask to treat 'a' as unsigned integer (32 bit)
    print("a lsr b: ", ua >> b)

    # There are no built-in functions for left rotation and right rotation in Python. But they can be easily implemented using bitwise operations.
    def rotl(n, d):
        return (n << d) | (n >> (32 - d))

    def rotr(n, d):
        return (n >> d) | (n << (32 - d)) & 0xFFFFFFFF

    print("a rol b: ", rotl(ua, b))
    print("a ror b: ", rotr(ua, b))

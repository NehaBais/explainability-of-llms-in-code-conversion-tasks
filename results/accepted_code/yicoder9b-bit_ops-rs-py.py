def main():
    a = 105
    b = 91
    print("a      = {:08b}".format(a))
    print("b      = {:08b}".format(b))
    print("a | b  = {:08b}".format(a | b))
    print("a & b  = {:08b}".format(a & b))
    print("a ^ b  = {:08b}".format(a ^ b))
    # Python does not have a built-in bitwise NOT operator for unsigned integers,
    # but you can use the `^` (XOR) operator with -1 to get an equivalent effect:
    print("~a     = {:08b}".format(a ^ -1))
    print("a << b = {:08b}".format(a << b))
    print("a >> b = {:08b}".format(a >> b))

    # Python does not have built-in rotate operators, so you'd need to define them yourself using bitwise and shift operations:
    def left_rotate(n, d):
        return (n << d) | (n >> (32 - d))

    def right_rotate(n, d):
        return (n >> d) | (n << (32 - d)) & 0xFFFFFFFF

    print("a left rotated by b = {:08b}".format(left_rotate(a, b)))
    print("a right rotated by b = {:08b}".format(right_rotate(a, b)))


if __name__ == "__main__":
    main()

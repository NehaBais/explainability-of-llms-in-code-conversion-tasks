def main():
    A = 105
    b = 91
    print("{0:08b}".format(A))
    print("{0:08b}".format(b))
    print("{0:08b}".format(A | b))
    print("{0:08b}".format(A & b))
    print("{0:08b}".format(A ^ b))
    print("{0:08b}".format(~A))
    print("{0:08b}".format(A << 3))
    print("{0:08b}".format(A >> 3))


if __name__ == "__main__":
    main()

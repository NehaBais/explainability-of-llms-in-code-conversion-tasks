def main():
    a = 105
    b = 91
    print(f"a      = {bin(a)[2:].zfill(8)}")
    print(f"b      = {bin(b)[2:].zfill(8)}")
    print(f"a | b  = {bin(a | b)[2:].zfill(8)}")
    print(f"a & b  = {bin(a & b)[2:].zfill(8)}")
    print(f"a ^ b  = {bin(a ^ b)[2:].zfill(8)}")
    print(f"!a     = {bin(a & 0xFF) if a < 0 else bin(~a)[2:].zfill(8)}")
    print(f"a << 3 = {bin(a << 3)[2:].zfill(8)}")
    print(f"a >> 3 = {bin(a >> 3)[2:].zfill(8)}")


if __name__ == "__main__":
    main()

def main():
    a: int = 105
    b: int = 91
    print(f"a      = {bin(a):0>9}")
    print(f"b      = {bin(b):0>9}")
    print(f"a | b  = {bin(a | b):0>9}")
    print(f"a & b  = {bin(a & b):0>9}")
    print(f"a ^ b  = {bin(a ^ b):0>9}")
    print(f"!a     = {bin(~a & 0xFF):0>9}")
    print(f"a << 3 = {bin(a << 3):0>9}")
    print(f"a >> 3 = {bin(a >> 3):0>9}")


if __name__ == "__main__":
    main()

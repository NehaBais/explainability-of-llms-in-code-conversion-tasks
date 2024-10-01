def main():
    a: int = 105
    b: int = 91
    print(f"a      = {bin(a)}")
    print(f"b      = {bin(b)}")
    print(f"a | b  = {bin(a | b)}")
    print(f"a & b  = {bin(a & b)}")
    print(f"a ^ b  = {bin(a ^ b)}")
    print(f"~a     = {-a & ((1 << 8) - 1)}")  # bitwise NOT
    print(f"a << 3 = {bin(a << 3)}")
    print(f"a >> 3 = {bin(a >> 3)}")


main()

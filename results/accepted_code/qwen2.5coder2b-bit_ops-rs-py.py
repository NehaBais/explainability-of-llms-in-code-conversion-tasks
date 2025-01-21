def main():
    a = 105
    b = 91

    print(f"a      = {a:0>8b}")
    print(f"b      = {b:0>8b}")

    print(f"a | b  = {a | b:0>8b}")
    print(f"a & b  = {a & b:0>8b}")
    print(f"a ^ b  = {a ^ b:0>8b}")

    print(f"!a     = {int(not a):0>8b}")  # Using int and not to perform bitwise NOT

    print(f"a << 3 = {a << 3:0>8b}")
    print(f"a >> 3 = {a >> 3:0>8b}")


if __name__ == "__main__":
    main()

import sys

def main():
    if len(sys.argv) < 3:
        exit(1)

    b = int(sys.argv[-2])
    if b == 0:
        exit(2)

    a = int(sys.argv[-3] ))

    print("a+b =", a + b))
    print("a-b =", a - b))
    print("a*b =", a * b))
    print("a/b =", a // b if b != 0 else "inf"))
    print("a%%b =", a % b))

if __name__ == "__main__":
    main()
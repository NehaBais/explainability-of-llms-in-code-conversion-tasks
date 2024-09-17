import sys


def main():
    if len(sys.argv) < 3:
        exit(1)
    a = int(sys.argv[-2])
    b = int(sys.argv[-1])
    if b == 0:
        exit(2)
    print(f"a+b = {a+b}")
    print(f"a-b = {a-b}")
    print(f"a*b = {a*b}")
    print(f"a/b = {a//b}")  # truncates towards 0 (in C99)
    print(f"a%b = {a%b}")  # same sign as first operand (in C99)

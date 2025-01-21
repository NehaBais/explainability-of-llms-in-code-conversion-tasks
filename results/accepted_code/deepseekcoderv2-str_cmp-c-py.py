import os
import sys


def str_compare(a, b):
    return 0 if a == b else (1 if a > b else -1)


def compare(a, b):
    result = (
        [str_compare(a, b)] * 2
        + [str_compare(a, b) > 0] * 2
        + [str_compare(a, b) < 0] * 2
    )
    print(f"{a} {' '.join(['1' if x else '0' for x in result])} {b}")


def case_insensitive_compare(a, b):
    return str_compare(a.lower(), b.lower())


def comparecase(a, b):
    result = (
        [case_insensitive_compare(a, b)] * 2
        + [case_insensitive_compare(a, b) > 0] * 2
        + [case_insensitive_compare(a, b) < 0] * 2
    )
    print(f"{a} {' '.join(['1' if x else '0' for x in result])} {b} ignoring case")


def main():
    args = sys.argv[1:]
    if len(args) % 2 != 0:
        print("Usage: python script.py string1 string2 [string3 string4 ...]")
        return

    for i in range(0, len(args), 2):
        a = args[i]
        b = args[i + 1]
        compare(a, b)
        comparecase(a, b)


if __name__ == "__main__":
    main()

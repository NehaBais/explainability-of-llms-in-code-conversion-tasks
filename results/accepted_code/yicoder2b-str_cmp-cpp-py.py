import argparse
from operator import gt, lt


def demo_compare(a, b, semantically):
    if a == b:
        print(f"{a} and {b} are exactly equal.")
    else:
        print(f"{a} and {b} are not exactly equal.")

    if a < b:
        print(f"{a} is lexically ordered before {b}.")
    elif a > b:
        print(f"{a} is lexically ordered after {b}.")
    else:
        print(f"{a} and {b} are not ordered differently than each other.")


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("stringA", type=str)
    parser.add_argument("stringB", type=str)
    args = parser.parse_args()
    demo_compare(args.stringA, args.stringB, "lexically")

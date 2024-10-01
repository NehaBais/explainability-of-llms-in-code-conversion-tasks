import sys


def main():
    if len(sys.argv) < 3:
        print("You must enter two integers as arguments")
        return
    a = int(sys.argv[1])
    b = int(sys.argv[2])
    if a < b:
        print(f"{a} is less than {b}")
    elif a == b:
        print(f"{a} equals {b}")
    else:
        print(f"{a} is greater than {b}")


if __name__ == "__main__":
    main()

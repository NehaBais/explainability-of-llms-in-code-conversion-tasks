import sys


def main():
    reader = sys.stdin
    buffer = ""
    lines = reader.readline()
    nums = [int(line.strip()) for line in lines]
    a = nums[0]
    b = nums[1]
    if a < b:
        print(f"{a} is less than {b}")
    elif a == b:
        print(f"{a} equals {b}")
    else:
        print(f"{a} is greater than {b}")


if __name__ == "__main__":
    main()

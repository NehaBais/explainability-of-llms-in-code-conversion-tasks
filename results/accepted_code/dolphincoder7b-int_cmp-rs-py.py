def main():
    import sys

    lines = [int(line.strip()) for line in sys.stdin.readlines()[:2]]
    a, b = lines[0], lines[1]

    if a < b:
        print("{} is less than {}".format(a, b))
    elif a == b:
        print("{} equals {}".format(a, b))
    else:
        print("{} is greater than {}".format(a, b))

import os


def mkdir_p(path):
    try:
        os.makedirs(path)
        return 0
    except OSError as e:
        if e.errno == errno.EEXIST and os.path.isdir(path):
            return 0
        else:
            print(f"couldn't create directory: {path}")
            return -1


if __name__ == "__main__":
    import sys

    if len(sys.argv) != 2:
        print("usage: mkdir <path>")
        sys.exit(-1)

    path_to_create = sys.argv[1]
    result = mkdir_p(path_to_create)
    sys.exit(result)

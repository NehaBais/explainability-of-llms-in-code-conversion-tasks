import os


def mkdir_p(path):
    try:
        os.makedirs(path)
    except OSError as e:
        if e.errno == os.error.EEXIST:
            pass
        else:
            raise e


if __name__ == "__main__":
    import sys

    if len(sys.argv) != 2:
        print("Usage: %s <path>" % sys.argv[0])
        sys.exit(1)
    mkdir_p(sys.argv[1])

import os


def main():
    err = "File move error"
    os.rename("input.txt", "output.txt")
    os.rename("docs", "mydocs")

    try:
        os.rename("/input.txt", "/output.txt")
    except OSError as e:
        print(err)

    try:
        os.rename("/docs", "/mydocs")
    except OSError as e:
        print(err)


if __name__ == "__main__":
    main()

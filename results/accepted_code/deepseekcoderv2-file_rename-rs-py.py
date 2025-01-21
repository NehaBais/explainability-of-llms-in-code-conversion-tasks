import os


def main():
    err = "File move error"
    try:
        os.rename("input.txt", "output.txt")
    except Exception as e:
        print(f"{err}: {e}")

    try:
        os.rename("docs", "mydocs")
    except Exception as e:
        print(f"{err}: {e}")

    try:
        os.rename("/input.txt", "/output.txt")
    except Exception as e:
        print(f"{err}: {e}")

    try:
        os.rename("/docs", "/mydocs")
    except Exception as e:
        print(f"{err}: {e}")


if __name__ == "__main__":
    main()

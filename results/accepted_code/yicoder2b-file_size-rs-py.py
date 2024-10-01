import os
import stat


def main():
    if len(sys.argv) != 2:
        print("Usage: python3 <script> <filename>")
        return
    filename = sys.argv[1]
    try:
        st = os.stat(filename)
        print(f"Size of {filename} is {st.st_size} bytes")
    except FileNotFoundError:
        print(f"{filename} not found")


if __name__ == "__main__":
    main()

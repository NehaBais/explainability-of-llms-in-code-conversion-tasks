import os

def print_file_size(filename):
    try:
        size = os.path.getsize(filename)
        print(f"Size of file {filename} is {size} bytes.")
    except Exception as ex:
        print(ex, sep='\n', end=' ')

def main():
    print_file_size("input.txt"))
    try:
        print_file_size("/input.txt")
    except FileNotFoundError:
        print(f"File not found at the root directory: /input.txt.")

if __name__ == "__main__":
    main()
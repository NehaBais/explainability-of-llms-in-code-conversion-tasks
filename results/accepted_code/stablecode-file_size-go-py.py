import os
import sys

def print_file_size(f):
    try:
        stat = os.stat(f)
        print(stat.st_size)
    except Exception as e:
        print("Error:", str(e)))

if __name__ == "__main__":
    print_file_size(os.path.join(os.getcwd(), 'input.txt'))
    print_file_size("/input.txt") if sys.platform != "win32" else print_file_size("\\\\input.txt")
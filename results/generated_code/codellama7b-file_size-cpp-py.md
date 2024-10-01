To convert this code from C++ to Python, you can use the following steps:

1. Install the `pathlib` library by running `pip install pathlib` in your terminal or command prompt.
2. Replace the `#include <filesystem>` line with `import pathlib`.
3. Replace the `std::filesystem::file_size(filename)` function with the equivalent Python code: `pathlib.Path(filename).stat().st_size`.
4. Replace the `std::cout << "Size of file " << filename << " is " << size << " bytes.";` line with the equivalent Python code: `print("Size of file", filename, "is", pathlib.Path(filename).stat().st_size, "bytes")`.
5. Replace the `try-catch` block with an `if` statement that checks if the file exists before trying to retrieve its size.
6. Add a new line to the end of the `main()` function that calls the `print_file_size()` function for both the current working directory and the file system root.

Here is the resulting Python code:
```
import pathlib

def print_file_size(filename):
    if pathlib.Path(filename).exists():
        size = pathlib.Path(filename).stat().st_size
        print("Size of file", filename, "is", size, "bytes")
    else:
        print("File does not exist")

if __name__ == '__main__':
    print_file_size("input.txt")
    print_file_size("/input.txt")
```

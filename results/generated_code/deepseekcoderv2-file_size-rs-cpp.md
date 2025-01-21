 Here's the equivalent C++ code for the provided Rust script. This C++ code reads a file name from command line arguments, checks its size if it exists in both the current working directory and the root of the filesystem, and handles errors gracefully.

```cpp
#include <iostream>
#include <fstream>
#include <filesystem>
#include <cstdlib> // for exit()

namespace fs = std::filesystem;

void exit_err(const std::string& msg, int code) {
    std::cerr << "Error: " << msg << std::endl;
    std::exit(code);
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        exit_err("No file name supplied", 1);
    }

    std::string file_name = argv[1];
    fs::path path(file_name);

    // Check in the current working directory first
    if (!fs::exists(path)) {
        path = fs::absolute(path); // Convert relative to absolute path
    }

    if (fs::exists(path) && fs::is_regular_file(path)) {
        std::ifstream file(path, std::ios::binary | std::ios::in);
        file.seekg(0, std::ios::end);
        std::cout << "Size of " << file_name << " is " << file.tellg() << " bytes" << std::endl;
    } else {
        exit_err("File does not exist", 2);
    }

    return 0;
}
```

### Explanation:
1. **Namespace and Path Handling**: We use `std::filesystem` to handle file system paths and checks. This is equivalent to Rust's `env` module for environment manipulation and `fs` module for file system operations.
2. **Error Handling**: The `exit_err` function prints an error message and exits the program with a given code, similar to Rust's `unwrap_or_else`.
3. **Main Logic**: 
   - It first checks if a filename is provided as command line argument. If not, it calls `exit_err` with an appropriate message and exit code.
   - It then constructs a path object from the provided file name. This handles both relative and absolute paths.
   - The program checks if the file exists in either the current working directory or its absolute form.
   - If the file exists and is a regular file, it calculates and prints its size using `std::ifstream`.
4. **File Existence Check**: Before attempting to read the file, we ensure that it exists and is a regular file with `fs::exists` and `fs::is_regular_file`.

This C++ code should be compiled with a standard-compliant C++17 capable compiler like GCC or Clang.

Here is the equivalent C++ code for your Rust program:
```cpp
#include <iostream>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Error: No file name supplied" << std::endl;
        return 1;
    }
    
    try {
        fs::path path = fs::current_path() / argv[1];
        auto size = fs::file_size(path);
        std::cout << "Size of " << path << " is " << size << " bytes" << std::endl;
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
        return 2;
    }
    
    return 0;
}
```
This C++ code does the same thing as your Rust program. It verifies the size of a file passed in as an argument. It first checks if there's an argument, and if not it prints an error message to standard error and returns with exit code 1. Then it attempts to create a filesystem path object representing the current working directory plus the filename given as an argument. If that succeeds, it uses `fs::file_size` to get the size of the file in bytes and prints this information to standard output. If something goes wrong during any of these steps, it catches the exception, prints an error message, and returns with exit code 2.

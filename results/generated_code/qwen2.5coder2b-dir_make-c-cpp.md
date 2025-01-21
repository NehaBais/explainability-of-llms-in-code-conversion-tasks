Below is the C++ equivalent of the given C code. Note that, in C++, we need to include headers for file operations and for handling directory creation.

```cpp
#include <iostream>
#include <fstream>
#include <filesystem>
#include <string>
#include <cerr>

void create_directory(std::string path) {
    if (std::filesystem::exists(path)) {
        std::cout << "Directory already exists." << std::endl;
    } else {
        try {
            std::filesystem::create_directories(path);
            std::cout << "Directory created successfully." << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Error creating directory: " << e.what() << std::endl;
        }
    }
}

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "usage: ./path/to/dir\n";
        return 1;
    }

    std::string path = argv[1];
    create_directory(path);
    return 0;
}
```

In this C++ program, `std::filesystem` library is used for creating directories, which simplifies the creation of directory hierarchy as it handles all the necessary checks and errors in a single call. The function `create_directory` checks if the directory already exists and creates it if not. It also includes error handling to catch and report any exceptions that might occur during the directory creation process.

Please note that this code runs on systems that support C++17 or later, which provides the necessary features of `std::filesystem`. If your system does not support C++17, you would need to implement the functionality using a loop in the C++ version, just as is done in the original C program.

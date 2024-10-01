The equivalent C++ code for the given Python code is as follows:

```cpp
#include <fstream>
#include <iostream>
#include <filesystem>

int main() {
    std::string current_directory = "./";
    std::string root_directory = "/";

    // Check if file exists in the current directory
    if(std::filesystem::exists(current_directory + "input.txt")) {
        std::cout << "File input.txt exists in the current directory.\n";
    } else {
        std::cout << "File input.txt does not exist in the current directory.\n";
    }

    // Check if file exists in the root directory
    if(std::filesystem::exists(root_directory + "input.txt")) {
        std::cout << "File input.txt exists in the root directory.\n";
    } else {
        std::cout << "File input.txt does not exist in the root directory.\n";
    }

    // Check if directory exists in the current directory
    if(std::filesystem::exists(current_directory + "docs")) {
        std::cout << "Directory docs exists in the current directory.\n";
    } else {
        std::cout << "Directory docs does not exist in the current directory.\n";
    }

    // Check if directory exists in the root directory
    if(std::filesystem::exists(root_directory + "docs")) {
        std::cout << "Directory docs exists in the root directory.\n";
    } else {
        std::cout << "Directory docs does not exist in the root directory.\n";
    }

    return 0;
}
```

Please note that this C++ code uses `<filesystem>` library which is part of C++17 standard. If you are using a version of C++ prior to C++17, please consider upgrading your compiler or use the boost filesystem library (it's similar to `<filesystem>`).

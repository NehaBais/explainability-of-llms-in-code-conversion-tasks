Sure! Here is the equivalent code in C++:

```cpp
#include <iostream>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;

void createFile(const std::string& fn) {
    try {
        std::ofstream file(fn, std::ios::binary | std::ios::out);
        if (!file.is_open()) {
            throw std::runtime_error("Failed to open file for writing");
        }
        std::cout << "file " << fn << " created!" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

void createDir(const std::string& dn) {
    try {
        if (!fs::create_directory(dn)) {
            throw std::runtime_error("Failed to create directory");
        }
        std::cout << "directory " << dn << " created!" << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}

int main() {
    // Create file and directory in the current working directory
    createFile("output.txt");
    createDir("docs");

    // Create file and directory in the filesystem root
    fs::path rootPath = "/";
    createFile(rootPath / "input.txt");
    createDir(rootPath / "docs");

    return 0;
}
```

### Explanation:
1. **Namespace**: We use `std::filesystem` for handling file system operations.
2. **File Creation**:
   - The `createFile` function creates an empty file using `std::ofstream`.
   - It checks if the file is open and throws an exception if it fails to open.
3. **Directory Creation**:
   - The `createDir` function uses `fs::create_directory` to create a directory.
   - It throws an exception if the directory creation fails.
4. **Main Function**:
   - Calls `createFile` and `createDir` for both relative and absolute paths.

### Compilation and Execution:
To compile this code, you need a C++ compiler that supports the C++17 standard (e.g., GCC 8.0 or later). You can compile it using:

g++ -std=c++17 -o create_files create_files.cpp

Then run the executable:

./create_files

This will create the files and directories in both the current working directory and the filesystem root as specified.

Sure! Here is a C++ implementation of `mkdir -p` using standard library functions:

```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

void createDirectory(const std::string& path) {
    try {
        fs::create_directories(path);
        std::cout << "Directory created successfully: " << path << std::endl;
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error creating directory: " << e.what() << std::endl;
    }
}

int main() {
    std::string path = "/tmp/some/path/to/dir";
    createDirectory(path);
    return 0;
}
```

This code uses the `<filesystem>` header, which is part of the C++17 standard library. The `fs::create_directories` function will create all necessary parent directories for the given path if they don't already exist. If the directory already exists, it will simply do nothing.

To compile and run this code, you need a C++17 compiler that supports the `<filesystem>` header. You can compile it using g++ with the `-std=c++17` flag:

g++ -std=c++17 -o create_dir create_dir.cpp
./create_dir

This will create the directory `/tmp/some/path/to/dir` and print a success message to the console. If there is an error, it will print an error message to the console.

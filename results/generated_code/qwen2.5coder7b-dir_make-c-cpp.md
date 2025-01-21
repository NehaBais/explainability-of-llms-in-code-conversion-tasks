Sure! Here is the equivalent C++ code for creating a directory and its missing parents:

```cpp
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

void createDirectory(const std::string& path) {
    try {
        fs::create_directories(path);
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error creating directory: " << e.what() << std::endl;
    }
}

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <path>" << std::endl;
        return 1;
    }

    createDirectory(argv[1]);

    return 0;
}
```

### Explanation:
1. **Namespace `std::filesystem`**: This is the C++ Standard Library for file system operations.
2. **Function `createDirectory`**: This function takes a path as a string and attempts to create it using `fs::create_directories`. If the directory already exists or there is an error, it will catch the exception and print an error message.
3. **Main Function**: The main function checks if the number of arguments is correct and then calls `createDirectory` with the provided path.

This code should work cross-platform as long as the C++17 standard is supported, which includes the `<filesystem>` header.

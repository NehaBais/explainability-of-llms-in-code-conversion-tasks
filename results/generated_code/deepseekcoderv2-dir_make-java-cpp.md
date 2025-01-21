 Sure, here is the equivalent code in C++ that creates a directory and any missing parents:

```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

void createDirectory(const std::string& path) {
    try {
        if (fs::create_directories(path)) {
            std::cout << "Path successfully created" << std::endl;
        } else {
            std::cout << "Directory already exists" << std::endl;
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error creating directory: " << e.what() << std::endl;
    }
}

int main() {
    createDirectory("C:/parent/test");
    return 0;
}
```

### Explanation:
1. **Namespace Alias**: We use `namespace fs = std::filesystem` to simplify the filesystem namespace usage.
2. **Function Definition**: The `createDirectory` function takes a string representing the path and uses `fs::create_directories` to create the directory and any necessary parent directories.
3. **Error Handling**: If the directory already exists, `create_directories` will return false, which we handle by printing "Directory already exists".
4. **Main Function**: The main function calls `createDirectory` with the specified path.

This code should work on both Windows and Unix-like systems (Linux, macOS) as it uses the C++17 standard library's filesystem support.

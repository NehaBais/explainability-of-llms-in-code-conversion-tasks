In C++, you can use the `<filesystem>` library which has been added in C++17 to perform file and directory operations. Here's how it could be implemented:

```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    try {
        // Specify the path for the directory
        fs::path dirPath("C:/parent/test");
        
        // Check if the directory exists and create missing parent directories
        if (fs::create_directories(dirPath)) {
            std::cout << "Path successfully created" << std::endl;
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }

    return 0;
}
```

To compile this code, you need to use a compiler that supports C++17 or later. If your compiler does not support the `std::filesystem` library, it's possible to find libraries such as Boost.Filesystem.

Note: This program won't work on Windows if your application is being run from an Administrator account due to permission issues. To ensure this works properly across different systems and user accounts, test thoroughly with different environment setups.

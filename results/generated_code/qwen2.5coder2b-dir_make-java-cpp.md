Below is the equivalent C++ code that creates a directory and its parent directories, if they do not exist. Note that this example uses platform-specific directory creation functions (`_mkdir` for Windows and `mkdir` for Unix-like systems). The code also handles exceptions to handle any errors that might occur during directory creation.

```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

bool create_directory(const std::string& path) {
    try {
        if (!fs::create_directories(path)) {
            std::cerr << "Failed to create directory: " << path << std::endl;
            return false;
        }
        std::cout << "Directory created successfully: " << path << std::endl;
        return true;
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error creating directory: " << e.what() << std::endl;
        return false;
    }
}

int main() {
    try {
        std::string path = "./path/to/dir";
        create_directory(path);
    } catch (const std::exception& e) {
        std::cerr << "Exception occurred: " << e.what() << std::endl;
    }
    return 0;
}
```

Please note that the `std::filesystem` library in C++17 or later is required to use this code. If you are using an older compiler, you might need to include additional headers and ensure that the appropriate library is linked during compilation.

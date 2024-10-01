Below is the C++ equivalent of the provided Java code:

C++ code:
```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

void createDirectories(const std::string& path) {
    try {
        fs::path dirPath(path);

        if (fs::create_directories(dirPath)))
            std::cout << "Directory created successfully\n";
        else
            std::cerr << "Failed to create directory\n";
    }
    catch (const std::exception& e) {
        std::cerr << "Exception caught: "  << e.what() << '\n';
    }
}

int main() {
    createDirectories("C:/parent/test");
    return 0;
}
```
Please, note that the C++17 filesystem library must be enabled in your compiler settings. Also, this code might work differently on different operating systems due to their inherent differences and limitations when dealing with filesystems.

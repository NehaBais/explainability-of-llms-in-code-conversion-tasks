```cpp
#include <filesystem>

bool fileExists(const std::string& filename) {
    return std::filesystem::exists(filename);
}

bool directoryExists(const std::string& directoryName) {
    return std::filesystem::exists(directoryName) && std::filesystem::is_directory(directoryName);
}

int main() {
    // Current working directory
    if (fileExists("input.txt") && directoryExists("docs")) {
        std::cout << "Files and directory exist in current working directory." << std::endl;
    } else {
        std::cout << "Files and directory do not exist in current working directory." << std::endl;
    }

    // Filesystem root
    if (fileExists("/input.txt") && directoryExists("/docs")) {
        std::cout << "Files and directory exist in filesystem root." << std::endl;
    } else {
        std::cout << "Files and directory do not exist in filesystem root." << std::endl;
    }

    return 0;
}
```


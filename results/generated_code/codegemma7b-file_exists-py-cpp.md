```cpp
#include <filesystem>

bool fileExists(const std::string& filename) {
    return std::filesystem::exists(filename);
}

bool directoryExists(const std::string& directory) {
    return std::filesystem::is_directory(directory);
}

int main() {
    // Check for files and directories in the current working directory
    if (fileExists("input.txt") && directoryExists("docs")) {
        std::cout << "Files and directories found in current working directory." << std::endl;
    } else {
        std::cout << "Files and directories not found in current working directory." << std::endl;
    }

    // Check for files and directories in the filesystem root
    if (fileExists("/input.txt") && directoryExists("/docs")) {
        std::cout << "Files and directories found in filesystem root." << std::endl;
    } else {
        std::cout << "Files and directories not found in filesystem root." << std::endl;
    }

    return 0;
}
```


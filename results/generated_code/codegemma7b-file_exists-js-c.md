```c
#include <filesystem>

bool fileExists(const std::string& filename) {
    return std::filesystem::exists(filename);
}

bool directoryExists(const std::string& directoryName) {
    return std::filesystem::exists(directoryName) && std::filesystem::is_directory(directoryName);
}

int main() {
    // Check for files and directories in the current working directory
    if (fileExists("input.txt") && directoryExists("docs")) {
        std::cout << "Files and directories exist in current working directory." << std::endl;
    } else {
        std::cout << "Files or directories missing in current working directory." << std::endl;
    }

    // Check for files and directories in the filesystem root
    if (fileExists("/input.txt") && directoryExists("/docs")) {
        std::cout << "Files and directories exist in filesystem root." << std::endl;
    } else {
        std::cout << "Files or directories missing in filesystem root." << std::endl;
    }

    return 0;
}
```


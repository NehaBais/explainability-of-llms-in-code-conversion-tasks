C++ doesn't have a built-in file system library like the ActiveXObject in JavaScript, so to perform these operations you'll need to use the Win32 API or POSIX functions (depending on your platform).

Here is an example using Windows API:

#include <windows.h>
#include <iostream>

void moveFile(const std::string& from, const std::string& to) {
    if (!MoveFileA(from.c_str(), to.c_str())) {
        std::cerr << "Failed to move file: " << GetLastError() << '\n';
    } else {
        std::cout << "Moved file from " << from << " to " << to << '\n';
    }
}

void moveFolder(const std::string& from, const std::string& to) {
    if (!MoveFileExA(from.c_str(), to.c_str(), MOVEFILE_REPLACE_EXISTING)) {
        std::cerr << "Failed to move folder: " << GetLastError() << '\n';
    } else {
        std::cout << "Moved folder from " << from << " to " << to << '\n';
    }
}

int main() {
    moveFile("input.txt", "output.txt");
    moveFile("c:/input.txt", "c:/output.txt");

    moveFolder("docs", "mydocs");
    moveFolder("c:/docs", "c:/mydocs");

    return 0;
}

And here is an example using POSIX functions:

```cpp
#include <iostream>
#include <filesystem>

void moveFile(const std::string& from, const std::string& to) {
    try {
        std::filesystem::rename(from, to);
        std::cout << "Moved file from " << from << " to " << to << '\n';
    } catch (std::exception &e) {
        std::cerr << "Failed to move file: " << e.what() << '\n';
    }
}

void moveFolder(const std::string& from, const std::string& to) {
    try {
        std::filesystem::rename(from, to);
        std::cout << "Moved folder from " << from << " to " << to << '\n';
    } catch (std::exception &e) {
        std::cerr << "Failed to move folder: " << e.what() << '\n';
    }
}

int main() {
    moveFile("input.txt", "output.txt");
    moveFile("c:/input.txt", "c:/output.txt");

    moveFolder("docs", "mydocs");
    moveFolder("c:/docs", "c:/mydocs");

    return 0;
}
```

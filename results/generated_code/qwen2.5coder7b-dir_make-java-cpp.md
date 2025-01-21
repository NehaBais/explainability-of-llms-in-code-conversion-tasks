Sure, here is the equivalent code in C++ using `<filesystem>`:

```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

bool createDirectory(const std::string& path) {
    try {
        if (fs::create_directories(path)) {
            std::cout << "path successfully created" << std::endl;
            return true;
        } else {
            std::cerr << "failed to create directory" << std::endl;
            return false;
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "file system error: " << e.what() << std::endl;
        return false;
    } catch (...) {
        std::cerr << "unknown error occurred" << std::endl;
        return false;
    }
}

int main() {
    std::string path = "C:/parent/test";
    createDirectory(path);
    return 0;
}
```

This C++ code does the same thing as your Java code. It creates a directory and any missing parents using `std::filesystem::create_directories`, which behaves similarly to the `mkdir -p` command in POSIX systems.

Make sure to include the `<filesystem>` header, which is part of the standard library from C++17 onwards. If you're using an older version of C++, you might need to install a third-party library like Boost.Filesystem.

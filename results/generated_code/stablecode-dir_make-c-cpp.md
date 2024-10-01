The provided code is already written in C, not C++. The implementation is creating a directory and any missing parent directories.

Below is the translation of your existing C code to C++:

```cpp
#include <iostream>
#include <string>
#include <filesystem/path.hpp> // Include filesystem library for path operations
#if defined(_WIN32) || defined(_WIN64)
const std::string PATH_SEPARATOR = "\\";  // For Windows
#else
const std::string PATH_SEPARATOR = "/";  // For POSIX systems
#endif

namespace fs = std::filesystem;

int createDirectories(const std::string& path) {
    try {
        fs::create_directories(path);
        return 0;
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
        return -1;
    }
}

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << basename(argv[0])) << " <path>\n";
        exit(1);
    }

    const std::string path(argv[1]));

    int result = createDirectories(path);

    if (result != -1) {
        std::cout << "Created directories successfully.\n";
    }

    return 0;
}
```
Note: The above C++ code uses the filesystem library introduced in C++17. Ensure that your compiler supports C++17 or later.

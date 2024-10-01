Below is the equivalent C++ code for the given Golang code:

```cpp
#include <iostream>
#include <filesystem>
#include <system_error>

namespace fs = std::filesystem;

void printStat(const std::string& p) {
    try {
        fs::path path(p);
        if (fs::exists(path)) {
            if (fs::is_regular_file(path))) {
                std::cout << path << " is a file" << std::endl;
            } else if (fs::is_directory(path)))) {
                std::cout << path << " is a directory" << std::endl;
            }
        } else {
            throw std::system_error(errno, std::system_error::category(), "Path does not exist"));
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

int main() {
    printStat("input.txt");
    printStat("/input.txt");
    printStat("docs");
    printStat("/docs");

    return 0;
}
```
Please note that the filesystem functions in C++20, and this code uses the experimental features of C++, so you need to ensure your compiler supports C++20's filesystem library or newer versions.

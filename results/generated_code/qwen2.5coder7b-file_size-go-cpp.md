Here is the equivalent C++ code for your Golang requirement. This version uses `std::filesystem` which provides a portable way of manipulating paths and files in C++. It's available from C++17 onwards.

```cpp
#include <iostream>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;

void printFileSize(const std::string& f) {
    try {
        auto stat = fs::status(f);
        std::cout << fs::file_size(stat) << '\n';
    } catch (fs::filesystem_error &e) {
        std::cerr << e.what() << '\n';
    }
}

int main() {
    printFileSize("input.txt");
    printFileSize("/input.txt");
    return 0;
}
```

This C++ code has the same functionality as your Golang code. It will print the file size of 'input.txt' in the current working directory and '/input.txt' which is usually the root of the file system (it may vary depending on where you run this program).

Please note that `std::filesystem` requires C++17 support, if you are using a version of GCC or Clang lower than 8.0, you need to enable C++17 by adding `-std=c++17` flag when compiling your code.

Also, remember that the root directory is not always accessible from a normal user's perspective due to system-level restrictions.

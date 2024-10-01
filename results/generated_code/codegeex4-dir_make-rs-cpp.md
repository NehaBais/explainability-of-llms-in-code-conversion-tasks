Sure, here is your Rust code converted to C++ using filesystem library that comes with C++17:

```c++
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    try {
        fs::create_directories("./path/to/dir");
    }
    catch (const std::exception& e) {
        std::cerr << "An error occurred: " << e.what() << '\n';
        return 1;
    }

    return 0;
}
```

This code does the following:
- The `std::filesystem` library provides a way to perform operations on file systems in a platform-independent manner.
- The `create_directories()` function is used to create directories along with any necessary but nonexistent parent directories. If the directory already exists, the function does nothing and returns successfully.

Please note that C++17 filesystem library may not be available in all standard libraries or compiler versions. To compile this code, you should ensure that your C++ standard version is set to 17 or higher, and appropriate flags are passed to the compiler for enabling filesystem support (e.g., `-lstdc++fs` on some compilers).

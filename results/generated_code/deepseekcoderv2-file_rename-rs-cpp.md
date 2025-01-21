 Certainly! Below is the equivalent C++ code for the given Rust code:

```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    const char* err_msg = "File move error";
    
    // In current working directory
    try {
        fs::rename("input.txt", "output.txt");
    } catch (const fs::filesystem_error& e) {
        std::cerr << err_msg << ": " << e.what() << '\n';
        return 1;
    }
    
    try {
        fs::rename("docs", "mydocs");
    } catch (const fs::filesystem_error& e) {
        std::cerr << err_msg << ": " << e.what() << '\n';
        return 1;
    }
    
    // In filesystem root
    try {
        fs::rename("/input.txt", "/output.txt");
    } catch (const fs::filesystem_error& e) {
        std::cerr << err_msg << ": " << e.what() << '\n';
        return 1;
    }
    
    try {
        fs::rename("/docs", "/mydocs");
    } catch (const fs::filesystem_error& e) {
        std::cerr << err_msg << ": " << e.what() << '\n';
        return 1;
    }

    return 0;
}
```

This C++ code uses the `<filesystem>` library to handle file system operations, similar to how Rust's `std::fs` module handles file operations. The `fs::rename` function is used to rename files and directories within both the current working directory and the filesystem root. Error handling is done by catching exceptions of type `fs::filesystem_error` and printing an error message if any operation fails.

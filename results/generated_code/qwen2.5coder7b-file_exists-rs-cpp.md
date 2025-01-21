Sure, here's the equivalent code in C++:

```cpp
#include <iostream>
#include <filesystem>

int main() {
    const std::string files[] = {"input.txt", "docs", "/input.txt", "/docs"};
    
    for (const auto& file : files) {
        try {
            std::filesystem::path p(file);
            if (std::filesystem::exists(p)) {
                if (std::filesystem::is_directory(p)) {
                    std::cout << file << " is a directory" << std::endl;
                } else {
                    std::cout << file << " is a file" << std::endl;
                }
            } else {
                std::cout << file << " does not exist" << std::endl;
            }
        } catch (const std::filesystem::filesystem_error& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

    return 0;
}
```

This C++ code uses the `<filesystem>` header, which is part of the Standard Library in C++17. It provides functionality to work with files and directories similarly to Rust's `std::fs`.

Here are some notes on the code:
- The `for` loop iterates over an array of file paths.
- The `try-catch` block is used to handle potential exceptions that might occur when accessing or checking the properties of the files and directories.
- The `std::filesystem::exists()` function checks if a path exists.
- The `std::filesystem::is_directory()` function checks if a path is a directory.

Make sure you have a C++17 compiler to compile this code, as it requires the `<filesystem>` header, which is only available in C++17 and later.

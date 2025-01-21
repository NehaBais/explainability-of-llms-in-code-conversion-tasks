In C++, you can use the `std::filesystem` module to get the metadata of files and directories. This module provides functionalities similar to Rust's `fs` crate, but it is part of the C++ Standard Library since C++17.

Here is your C++ code:

```cpp
#include <iostream>
#include <filesystem>

int main() {
    // First for the current working directory
    std::filesystem::path current_dir(".");

    if (std::filesystem::exists(current_dir)) {
        if (std::filesystem::is_directory(current_dir)) {
            std::cout << "Current directory is a directory" << std::endl;
        } else {
            std::cout << "Current directory is a file" << std::endl;
        }
    } else {
        std::cout << "Current directory does not exist" << std::endl;
    }

    // Second for the filesystem root
    if (std::filesystem::exists(std::filesystem::path("/"))) {
        if (std::filesystem::is_directory(std::filesystem::path("/"))) {
            std::cout << "Root is a directory" << std::endl;
        } else {
            std::cout << "Root is a file" << std::endl;
        }
    } else {
        std::cout << "Root does not exist" << std::endl;
    }

    // For files and directories in the specified paths
    for (const auto &file : {"input.txt", "docs"}) {
        if (std::filesystem::exists(std::filesystem::path(file))) {
            if (std::filesystem::is_directory(std::filesystem::path(file))) {
                std::cout << file << " is a directory" << std::endl;
            } else {
                std::cout << file << " is a file" << std::endl;
            }
        } else {
            std::cout << file << " does not exist" << std::endl;
        }
    }

    // For files and directories in the filesystem root
    for (const auto &directory : {"/input.txt", "/docs"}) {
        if (std::filesystem::exists(std::filesystem::path(directory))) {
            if (std::filesystem::is_directory(std::filesystem::path(directory))) {
                std::cout << directory << " is a directory" << std::endl;
            } else {
                std::cout << directory << " is a file" << std::endl;
            }
        } else {
            std::cout << directory << " does not exist" << std::endl;
        }
    }

    return 0;
}
```

This code snippet includes the necessary headers and uses C++'s `std::filesystem` module to check for the existence of files and directories in the specified paths. The paths include both current working directory and root, as well as the specified paths within those directories.

Here's the converted code from Rust to C++ that verifies whether a file called "input.txt" and a directory called "docs" exist in both the current working directory and in the filesystem root:
```c++
#include 
#include 
int main() {
    // Check for file in current working directory
    std::string files[] = {"input.txt", "docs"};
    for (const auto& file : files) {
        struct stat file_info;
        if (stat(file.c_str(), &file_info) == 0) {
            if (S_ISDIR(file_info.st_mode)) {
                std::cout << file << " is a directory" << std::endl;
            } else if (S_ISREG(file_info.st_mode)) {
                std::cout << file << " is a file" << std::endl;
            }
        } else {
            std::cerr << file << " does not exist" << std::endl;
        }
    }
    // Check for file in filesystem root
    files[0] = "/input.txt";
    files[1] = "/docs";
    for (const auto& file : files) {
        struct stat file_info;
        if (stat(file.c_str(), &file_info) == 0) {
            if (S_ISDIR(file_info.st_mode)) {
                std::cout << file << " is a directory" << std::endl;
            } else if (S_ISREG(file_info.st_mode)) {
                std::cout << file << " is a file" << std::endl;
            }
        } else {
            std::cerr << file << " does not exist" << std::endl;
        }
    }
}
```
Note that in C++, the `stat` function from the `<sys/stat.h>` header file must be used to check for the existence of a file or directory, while in Rust, the `std::fs::metadata` function can do this automatically. Additionally, in C++, the `S_ISDIR` and `S_ISREG` macros must be used to determine whether a file is a directory or a regular file, while in Rust, the `is_dir()` and `is_file()` methods of the `std::fs::Metadata` struct can do this automatically.


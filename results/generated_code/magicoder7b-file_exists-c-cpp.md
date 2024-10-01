 C and C++ are different languages with different standard libraries. This code works in C, but you can't use the same functions `check_reg` and `check_dir` directly in C++, because they don't exist in the Standard Template Library (STL).

So I would suggest changing it to use the `<filesystem>` library that is part of C++17. Here is a possible implementation:

```cpp
#include <iostream>
#include <filesystem>

int main() {
    std::cout << "input.txt is a regular file? " 
              << (std::filesystem::exists("input.txt") &&
                 std::filesystem::is_regular_file("input.txt")) ? "yes" : "no";
    std::cout << "\ndocs is a directory? " 
              << (std::filesystem::exists("docs") &&
                 std::filesystem::is_directory("docs")) ? "yes" : "no";
    std::cout << "\n/input.txt is a regular file? " 
              << (std::filesystem::exists("/input.txt") &&
                 std::filesystem::is_regular_file("/input.txt")) ? "yes" : "no";
    std::cout << "\n/docs is a directory? " 
              << (std::filesystem::exists("/docs") &&
                 std::filesystem::is_directory("/docs")) ? "yes" : "no";
    return 0;
}
```

This code uses `std::filesystem::exists` to check whether the file or directory exists, and then checks its type with `std::filesystem::is_regular_file` for regular files and `std::filesystem::is_directory` for directories. The results are printed in a similar way as the C version. 

Note: This code assumes that "input.txt" is in the same directory where this .cpp file is, otherwise, you need to provide its full path like "/path/to/input.txt".

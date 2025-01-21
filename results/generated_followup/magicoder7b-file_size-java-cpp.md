 The error occurred because C++17 introduced `std::filesystem`, which is not available in older versions (like C++14).

To fix the issue, you can either upgrade to a newer version of C++, or use an alternative library such as Boost that provides equivalent functionality. 

Alternatively, for C++17 and later:

```cpp
#include <filesystem>
#include <iostream>

int main() {
    std::filesystem::path fileA = "file.txt";
    auto fileSize = std::filesystem::file_size(fileA);
    std::cout << fileSize << " B\n";

    std::filesystem::path fileB = "/file.txt";
    fileSize = std::filesystem::file_size(fileB);
    std::cout << fileSize << " B\n";
}
```

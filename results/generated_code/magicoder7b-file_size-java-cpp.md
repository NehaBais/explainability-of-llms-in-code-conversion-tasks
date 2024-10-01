 In C++, you can use the `filesystem` library from the standard library to get the size of a file. Here's your Java code converted into C++:

```cpp
#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path fileA = "file.txt";
    auto fileSize = std::filesystem::file_size(fileA);
    std::cout << fileSize << " B\n";
    
    std::filesystem::path fileB = "/file.txt";
    fileSize = std::filesystem::file_size(fileB);
    std::cout << fileSize << " B\n";
}
```
Please be aware that in C++, `std::filesystem::file_size` function will throw an exception if the file does not exist or you lack permissions to read it. This code doesn't include error checking for these situations which is a good practice, but you may want to add this depending on your use case. 
Also, note that the `path` type used in std::filesystem namespace in C++17 and later is not available in older versions (like C++14). In those cases, you can use `std::string` or `char const*` instead of `std::filesystem::path`.

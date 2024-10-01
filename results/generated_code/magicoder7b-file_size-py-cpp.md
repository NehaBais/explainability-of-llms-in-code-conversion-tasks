 In C++, you can use `std::filesystem` from `<filesystem>` library to get the size of a file in bytes like this:

```c++
#include <iostream>
#include <filesystem>

int main() {
    std::string inputFileName = "input.txt";
    
    // Get the current working directory.
    std::filesystem::path cwd = std::filesystem::current_path();
    
    // Get the size of file in the current directory.
    auto cwdFileSize = std::filesystem::file_size(cwd / inputFileName);
    std::cout << "Size of file " << inputFileName << " in the current working directory: " << cwdFileSize << " bytes" << std::endl;
    
    // Get the size of file at root.
    auto rootFileSize = std::filesystem::file_size("/" + inputFileName);
    std::cout << "Size of file " << inputFileName << " in the root directory: " << rootFileSize << " bytes" << std::endl;
    
    return 0;
}
```
Please note that this code assumes you are using a C++17 or later compiler, as `std::filesystem` library is new in C++17. The `/` operator is used to concatenate the file name with the root directory string.

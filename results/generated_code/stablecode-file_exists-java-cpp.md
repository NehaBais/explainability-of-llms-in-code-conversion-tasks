In C++, you can use the `std::filesystem` library which is available from C++17 onwards. 

Here's your converted Java code to C++:

```cpp
#include <iostream>
#include <filesystem>

int main() {
    // For the current working directory
    std::string path_cwd = std::filesystem::current_path().string();
    if(std::filesystem::exists(path_cwd + "/docs/input.txt") && 
       std::filesystem::exists(path_cwd + "/docs") &&
       std::filesystem::exists(path_cwd))) {
        std::cout << "The file and directory exist in the current working directory." << std::endl;
    }

    // For a file and directory in the filesystem root
    if(std::filesystem::exists("/docs/input.txt") && 
       std::filesystem::exists("/docs") &&
       std::filesystem::exists("/"))) {
        std::cout << "The file and directory exist in the root of the filesystem." << std::endl;
    }

    return 0;
}
```
This code checks for the existence of a file named `input.txt` and a directory named `docs`, in both the current working directory and the root of the filesystem. The results are printed to the console.

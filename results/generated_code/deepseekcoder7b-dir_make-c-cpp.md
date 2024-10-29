Your code already looks good and should work on POSIX compliant systems like Linux, Unix etc. You just need to include <iostream> for input/output operations in C++ and <sys/stat.h> which is not needed here since we are using std::filesystem in the implementation.

Here's your code converted into a C++ version:

```cpp
#include <iostream>
#include <string>
#include <filesystem>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "usage: " << argv[0] << " <path>\n";
        return 1;
    }
    
    const std::string path = argv[1];

    // If the directory exists, we do nothing and exit successfully.
    if (std::filesystem::exists(path)) {
        return 0;
    }
  
    // Creates the directories recursively using C++17 filesystem library
    std::error_code ec;
    bool success = std::filesystem::create_directories(path, ec);
    
    if (!success) {
        std::cerr << "couldn't create directory: " << path << "\n";
        return 1;
    }
    
    return 0;
}
```
In this code, we first check if the given directory exists. If it does not exist, `std::filesystem::create_directories()` is called to create directories recursively from top level path downwards. Note that in order to use `std::filesystem` you need C++17 support or a compiler with a similar feature like MinGW GCC 8.x (with -std=c++17 and experimental option).


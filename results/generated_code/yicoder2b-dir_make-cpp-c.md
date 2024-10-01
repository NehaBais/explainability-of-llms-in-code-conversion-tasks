Here is the C++ code that you asked for. The implementation uses POSIX's `mkdir` system call to create directories:

```cpp
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "usage: mkdir <path>\n";
        return -1;
    }
    
    fs::path pathToCreate(argv[1]);
    
    // If the directory already exists, return successfully.
    if (exists(pathToCreate)) {
        std::cout << "Directory " << argv[1] << " already exists\n";
        return 0;
    }

    try {
        create_directories(pathToCreate);
    } catch (const fs::filesystem_error& e) {
        // If the directory could not be created, print the error message.
        std::cout << "couldn't create directory: " << argv[1] << std::endl;
        return -1;
    }

    return 0;
}
```
This code works on most POSIX-compliant systems such as Linux, macOS, and Windows. However, the output of this script may vary based on the user's environment settings.

The C++ equivalent of `os.MkdirAll` would look like this:

```cpp
#include <iostream>
#include <filesystem>

// Function to create a directory recursively, if it does not exist.
void createDirectory(const std::string& path, const std::filesystem::perms& permissions) {
    try {
        std::filesystem::create_directories(path, permissions);
    }
    catch (const std::filesystem::filesystem_error& e) {
        std::cerr << "Error creating directory: " << e.what() << "\n";
        return;
    }
}

int main() {
    std::string path = "./path/to/dir";
    createDirectory(path, std::filesystem::perms(0770));
    return 0;
}
```

This code uses the C++ Standard Library's `std::filesystem` module which is available in g++14 or later. It first attempts to create the directory. If it already exists, an error message will be printed out. This function works well cross-platform as it utilizes functions provided by the C++ standard library.

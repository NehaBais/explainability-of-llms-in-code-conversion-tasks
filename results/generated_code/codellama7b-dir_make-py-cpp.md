 Certainly! Here's the equivalent code in C++:
```cpp
#include <iostream>
#include <filesystem>

void mkdirp(const std::string& path) {
    namespace fs = std::filesystem;

    if (fs::exists(path)) {
        return;
    }

    // Create missing parents if needed
    fs::create_directories(path);
}
```
This code uses the `std::filesystem` library, which is available in C++17 and later. It first checks if the directory already exists using the `fs::exists()` function. If it does not exist, it creates the directories using the `fs::create_directories()` function.

You can call this function by passing the path of the directory you want to create as an argument, like this:

mkdirp("./path/to/dir");

Note that if the directory already exists, this function will return successfully without creating any new directories.

Below is your converted Golang code to C++:

```C++
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

void createDirectories(const std::string& path) {
    try {
        fs::create_directories(path);
        std::cout << "Directories created successfully.\n";
    } catch (fs::filesystem_error& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }
}

int main() {
    createDirectories("/tmp/some/path/to/dir");

    return 0;
}
```
This C++ code does exactly the same as your Golang code. It uses the `std::filesystem` library to create directories and any missing parents. If a directory already exists, it will return successfully. 

Cross-platform compatibility is ensured by using the C++17 standard which includes the necessary filesystem library enhancements for cross-platform support.

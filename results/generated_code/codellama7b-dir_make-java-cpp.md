
Here is the C++ equivalent of the Java code:
```cpp
#include <iostream>
#include <filesystem>

int main() {
    std::string path = "C:/parent/test";
    try {
        // Create directory and any missing parents
        if (std::filesystem::create_directory(path)) {
            std::cout << "Path successfully created" << std::endl;
        } else {
            // Handle error
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
```
Note that the `std::filesystem` namespace is used to access the `create_directory()` function, which creates a directory and any missing parents. The `try-catch` block is used to handle exceptions that may occur during the creation of the directory.

Also note that this C++ code uses the C++17 standard library, so you need to have a compiler that supports it (e.g. GCC 8 or higher) in order for it to work correctly.

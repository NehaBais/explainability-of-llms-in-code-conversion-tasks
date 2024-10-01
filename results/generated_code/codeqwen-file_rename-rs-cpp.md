In C++, you can use the `std::filesystem` library to perform file and directory operations. Below is the equivalent code of your Rust program in C++:

```cpp
#include <iostream>
#include <filesystem>

int main() {
    const std::string err = "File move error";
    if (std::filesystem::exists("input.txt")) {
        std::filesystem::rename("input.txt", "output.txt");
        if (!std::filesystem::exists("output.txt")) {
            std::cerr << err << std::endl;
        }
    } else {
        std::cerr << err << std::endl;
    }

    if (std::filesystem::exists("docs")) {
        std::filesystem::rename("docs", "mydocs");
        if (!std::filesystem::exists("mydocs")) {
            std::cerr << err << std::endl;
        }
    } else {
        std::cerr << err << std::endl;
    }

    // For root directory '/'
    if (std::filesystem::exists("/input.txt")) {
        std::filesystem::rename("/input.txt", "/output.txt");
        if (!std::filesystem::exists("/output.txt")) {
            std::cerr << err << std::endl;
        }
    } else {
        std::cerr << err << std::endl;
    }

    if (std::filesystem::exists("/docs")) {
        std::filesystem::rename("/docs", "/mydocs");
        if (!std::filesystem::exists("/mydocs")) {
            std::cerr << err << std::endl;
        }
    } else {
        std::cerr << err << std::endl;
    }

    return 0;
}
```
In C++, the `std::filesystem::exists()` function is used to check if a file or directory exists. If it doesn't exist, then the rename operation will throw an exception. You also need to handle this exception in order not to terminate the program abruptly.

Below is the equivalent C++ code for your given Golang program:

```cpp
#include <iostream>
#include <fstream>
#include <filesystem>

void printFileSize(const std::string& f) {
    try {
        std::filesystem::path filePath(f);
        auto fileStat = std::filesystem::file_status(filePath);

        if (std::filesystem::exists(fileStat)) {
            std::cout << "Size of the file: " << filePath << ": "
                      << std::filesystem::file_size(filePath) << " bytes\n";
        } else {
            std::cerr << "File does not exist: " << filePath << "\n";
        }
    } catch (const std::exception& e) {
        std::cerr << "Exception occurred: " << e.what() << "\n";
    }
}

int main() {
    printFileSize("input.txt");
    printFileSize("/input.txt");

    return 0;
}
```

In this C++ program, we used the standard library's filesystem module for navigating and manipulating file system paths. The `file_size` function is used to get the size of a file in bytes.

Please note that the above code will compile and run only on platforms that support C++17 or later due to the use of `std::filesystem`.

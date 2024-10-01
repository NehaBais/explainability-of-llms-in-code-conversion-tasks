The equivalent C++ code for the given Java code is as follows:

```cpp
#include <filesystem>
#include <iostream>

int main() {
    try {
        std::filesystem::create_directories("here/docs");
        std::filesystem::create_directories("/docs");
        std::ofstream outputFile1;
        outputFile1.open("here/output.txt", std::ios::out);
        if (!outputFile1.is_open()) {
            throw std::runtime_error("Failed to open file 'here/output.txt'");
        }
        std::ofstream outputFile2;
        outputFile2.open("/output.txt", std::ios::out);
        if (!outputFile2.is_open()) {
            throw std::runtime_error("Failed to open file '/output.txt'");
        }
    } catch (std::exception& e) {
        std::cerr << "Error: " << e.what() << '\n';
    }

    return 0;
}
```

Here, we are using the C++17 `<filesystem>` library to create directories and files. The `create_directories()` function creates the specified directory (including any necessary intermediate parent directories) if they do not already exist. 

The `ofstream::open()` function is used to open a file for writing in binary mode. If an error occurs during opening, it throws an exception which we catch and output to stderr.

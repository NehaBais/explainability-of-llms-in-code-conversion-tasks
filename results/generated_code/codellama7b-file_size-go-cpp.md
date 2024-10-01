Sure! Here's the C++ code that corresponds to the Golang code you provided:
```cpp
#include <iostream>
#include <filesystem>

void printFileSize(const std::string& f) {
    // Use std::filesystem to get information about the file
    const auto stat = std::filesystem::status(f);
    if (!stat.exists()) {
        // Print an error message if the file does not exist
        std::cout << "File " << f << " does not exist." << std::endl;
    } else {
        // Print the size of the file
        std::cout << stat.file_size() << std::endl;
    }
}

int main() {
    printFileSize("input.txt");
    printFileSize("/input.txt");
    return 0;
}
```
This code uses the `std::filesystem` class to get information about files and directories in the file system. The `stat` variable is of type `std::filesystem::status`, which provides information such as the file size, last modification time, and permissions.

The `printFileSize` function takes a string argument representing the path to the file whose size should be printed. It uses the `exists()` method of the `std::filesystem::status` class to check if the file exists, and prints an error message if it does not exist. If the file exists, it prints its size using the `file_size()` method of the `std::filesystem::status` class.

The `main` function simply calls the `printFileSize` function twice with different arguments, once for the file "input.txt" in the current working directory and once for the file "/input.txt" in the root of the file system.

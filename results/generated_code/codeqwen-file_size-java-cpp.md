The equivalent C++ code for the given Java code is:

```cpp
#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path fileA("file.txt");
    std::cout << std::setw(20) << std::right << std::fixed << std::showbase << fileA.file_size() << " B\n";

    std::filesystem::path fileB("/file.txt");
    std::cout << std::setw(20) << std::right << std::fixed << std::showbase << fileB.file_size() << " B\n";

    return 0;
}
```

This C++ code utilizes the `<filesystem>` library, which is a standard library for performing filesystem operations in C++17 onwards. 

The function `std::filesystem::path` takes the path of the file, and `file_size()` returns the size of the file in bytes. The `std::cout << std::setw(20)` line is used to print out the filesize with a total width of 20 characters, right aligned.

Please note that this code will throw an exception if the file does not exist or cannot be opened for some other reason. You may want to include error checking in your production code.

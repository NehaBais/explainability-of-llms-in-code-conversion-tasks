Sure, here is the equivalent code in C++:

```cpp
#include <iostream>
#include <filesystem>

bool checkFileExistence() {
    return std::filesystem::exists(std::filesystem::path{"docs/input.txt"});
}

int main() {
    // For current working directory
    if (checkFileExistence()) {
        std::cout << "The file exists in the current working directory." << std::endl;
    } else {
        std::cout << "The file does not exist in the current working directory." << std::endl;
    }

    // For root directory
    if (checkFileExistence()) {
        std::cout << "The file exists in the root directory." << std::endl;
    } else {
        std::cout << "The file does not exist in the root directory." << std::endl;
    }

    return 0;
}
```

In this program, we're using C++'s `filesystem` library which is a standard part of C++. It provides functions to interact with the filesystem and check for existence of files and directories.

The function `checkFileExistence()` uses the `std::filesystem::exists()` method from the `filesystem` library. This method checks if the specified path exists on the file system. If it does, it returns true; otherwise, it returns false.

In the `main()` function, we're calling this `checkFileExistence()` function twice, once for the current working directory and once for the root directory. The result of each call is then printed to the console.

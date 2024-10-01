```cpp
#include <iostream>
#include <filesystem>
#include <string>

int main() {
    std::string path = "./path/to/dir";

    try {
        std::filesystem::create_directories(path);
        std::cout << "Directory created successfully." << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error creating directory: " << e.what() << std::endl;
    }

    return 0;
}
```

**Explanation:**

* The code includes the necessary header files for file system operations and string manipulation.
* The `create_directories()` function from the `<filesystem>` namespace creates the directory specified by the path argument, along with any missing parent directories.
* The function returns an exception if the directory cannot be created.
* The code attempts to create the directory and handles any exceptions that may arise.

**Cross-platform Support:**

The code works equally well across different operating systems and platforms that support the `<filesystem>` namespace.

**Usage:**

int main() {
    std::string path = "./path/to/dir";
    // ...
}

**Note:**

* The `create_directories()` function creates the directory with read, write, and execute permissions.
* The directory name should be specified as a string argument.
* The code uses the `<filesystem>` namespace, which is available in C++17 and later versions.

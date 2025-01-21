Below is the equivalent C++ code for creating a directory and any missing parents using the Boost.Filesystem library. Boost.Filesystem provides a `create_directories` function which does exactly what you need, creating directories recursively.

```cpp
#include <boost/filesystem.hpp>
#include <iostream>

// Function to create directory with parents if they don't exist
void mkdirp(const std::string& p) {
    try {
        boost::filesystem::path dirPath(p);
        // Create the directory and its parents if they don't exist
        if (boost::filesystem::create_directories(dirPath)) {
            std::cout << "Directory created successfully: " << p << std::endl;
        } else {
            std::cout << "Directory already exists or could not be created: " << p << std::endl;
        }
    } catch (const boost::filesystem::filesystem_error& e) {
        // Handle any errors during directory creation
        std::cerr << "Filesystem error: " << e.what() << std::endl;
    }
}

int main() {
    // Example usage of mkdirp function
    std::string path = "./path/to/dir";
    mkdirp(path);
    return 0;
}
```

### Explanation:
1. **Boost.Filesystem**: This is a C++ library that provides portable file system operations. It includes functions like `create_directories` which attempts to create a directory and any necessary parent directories.

2. **create_directories**: This function takes a path as an argument and creates the directory along with all its parents if they do not already exist. If the directory is created successfully, it returns `true`; otherwise, it returns `false`.

3. **Error Handling**: The `catch` block handles any exceptions that may occur during the file system operations.

4. **main Function**: Demonstrates how to use the `mkdirp` function with an example path.

### Dependencies:
To compile this code, you need to link against the Boost.Filesystem library. You can do this using a command like:

g++ -o mkdirp_example mkdirp_example.cpp -lboost_filesystem -lboost_system

This will create an executable named `mkdirp_example` that compiles and runs successfully on most Unix-like systems, including Linux and macOS.

Note: The Boost.Filesystem library is part of the larger Boost C++ Libraries. If you don't have Boost installed, you can download it from [Boost.org](https://www.boost.org/).

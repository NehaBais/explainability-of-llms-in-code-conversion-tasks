 Certainly! Below is a C++ implementation that mimics the behavior of Python's `os.makedirs` with the `exist_ok` option set to `true`. This code will create directories and any necessary parent directories if they do not already exist.

```cpp
#include <filesystem>
#include <iostream>

void mkdirp(const std::string& path) {
    try {
        // Create the directory, creating parents as needed
        std::filesystem::create_directories(path);
        std::cout << "Directory created successfully: " << path << std::endl;
    } catch (const std::filesystem::filesystem_error& e) {
        std::cerr << "Error creating directory: " << e.what() << std::endl;
    }
}

int main() {
    // Example usage
    mkdirp("./path/to/dir");
    return 0;
}
```

### Explanation:
1. **Include Headers**: The code includes the necessary headers for filesystem operations in C++.
2. **Function Definition**: The `mkdirp` function takes a single argument, which is a string representing the path to the directory.
3. **Create Directories**: The `std::filesystem::create_directories` function is used to create the directory and any missing parent directories. This function will not throw an exception if the directory already exists.
4. **Error Handling**: If there is an error (e.g., insufficient permissions), it catches a `std::filesystem::filesystem_error` and prints the error message.
5. **Main Function**: The `main` function demonstrates how to call the `mkdirp` function with a sample path.

This implementation should work on most platforms that support C++17 or later, including Windows, Linux, and macOS.

 To implement a function in C++ that mimics the behavior of `os.MkdirAll` from Go, you can use the standard library's file path manipulation and error handling capabilities. Below is an example implementation using the `<filesystem>` module introduced in C++17, which provides cross-platform support for filesystem operations:

```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

void MkdirAll(const std::string& path) {
    try {
        if (fs::create_directories(path)) {
            std::cout << "Directory created successfully: " << path << std::endl;
        } else {
            std::cout << "Directory already exists: " << path << std::endl;
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Filesystem error occurred: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "General exception occurred: " << e.what() << std::endl;
    }
}

int main() {
    MkdirAll("/tmp/some/path/to/dir");
    return 0;
}
```

### Explanation:
1. **Namespace Alias**: We use a namespace alias `fs` for `std::filesystem` to make the code more readable and concise.
2. **Function Definition**: The function `MkdirAll` takes a single argument, which is the path string.
3. **Error Handling**: The function uses a try-catch block to handle potential filesystem errors or exceptions that might occur during directory creation.
4. **Directory Creation**: The `create_directories` function from `<filesystem>` is used to create the directory and any necessary parent directories if they do not already exist. If the directory exists, it does nothing.
5. **Output**: Depending on whether the directory was created or already existed, a message is printed to standard output.
6. **Main Function**: The `main` function demonstrates how to call `MkdirAll` with a sample path.

This implementation should work across different platforms supported by C++. Note that if you are using an older version of C++ without `<filesystem>`, you might need to use platform-specific APIs or third-party libraries for filesystem operations.

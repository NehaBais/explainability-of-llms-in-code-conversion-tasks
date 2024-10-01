In C++, you can use the `<filesystem>` library introduced in C++17 to achieve similar functionality as `mkdir -p`. This allows you to create directories and their missing parents. Here's how you can implement a function equivalent to `os.MkdirAll`:

```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

void createDirectories(const std::string &path) {
    try {
        // Create the directory along with any necessary parent directories.
        fs::create_directories(path);
        
        // Check if directory was created successfully.
        if (fs::exists(path)) {
            std::cout << "Directory created successfully: " << path << std::endl;
        } else {
            std::cerr << "Failed to create directory: " << path << std::endl;
        }
    } catch (const fs::filesystem_error &e) {
        // Handle any errors during the creation process.
        std::cerr << e.what() << '\n';
    }
}

int main() {
    std::string path = "./path/to/dir";
    createDirectories(path);
    
    return 0;
}
```

### Explanation:

1. **Namespace Alias**: `namespace fs = std::filesystem;` is used to simplify code and avoid typing `std::filesystem` repeatedly.
2. **Function Definition**: The function `createDirectories(const std::string &path)` takes a path as an argument.
3. **Directory Creation**: Inside the function, `fs::create_directories(path);` attempts to create the directory at the specified path along with any necessary parent directories.
4. **Existence Check**: After creation, it checks whether the directory exists using `if (fs::exists(path))`. It prints a success message if the directory was created or an error message otherwise.
5. **Error Handling**: The function catches and handles exceptions that may be thrown during the directory creation process.

### Notes:
- Ensure your compiler supports C++17, as `<filesystem>` is part of this standard.
- This implementation should work equally well across platforms since `<filesystem>` provides a consistent API for file system operations.

Compile the code with a flag for enabling C++17 if it's not enabled by default:

g++ -std=c++17 your_file.cpp -o output_executable

This code will create the directory "./path/to/dir" (or any specified path) and its missing parent directories, just like `os.MkdirAll` in Go.

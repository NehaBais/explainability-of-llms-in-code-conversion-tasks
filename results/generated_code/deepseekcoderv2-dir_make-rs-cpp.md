 Certainly! Below is the equivalent C++ code to achieve the same functionality as the provided Rust code. This implementation uses the `<filesystem>` library, which provides cross-platform support for file system operations.

```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

void create_directory(const std::string& path) {
    try {
        if (!fs::exists(path)) {
            fs::create_directories(path);
            std::cout << "Directory created successfully." << std::endl;
        } else {
            std::cout << "Directory already exists." << std::endl;
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "An error occurred: " << e.what() << std::endl;
    }
}

int main() {
    std::string path = "./path/to/dir";
    create_directory(path);
    return 0;
}
```

### Explanation:
1. **Namespace Aliasing**: We use `namespace fs = std::filesystem;` to alias the filesystem namespace for brevity.
2. **Function Definition**: The function `create_directory` takes a string representing the path.
3. **Directory Check and Creation**: It checks if the directory exists using `fs::exists(path)`. If it doesn't exist, it creates the directories (including any necessary parent directories) with `fs::create_directories(path)`.
4. **Error Handling**: Any errors during file system operations are caught and reported.
5. **Main Function**: The main function calls `create_directory` with the specified path.

This C++ code should work similarly to the provided Rust code, creating directories and their necessary parents if they do not already exist.

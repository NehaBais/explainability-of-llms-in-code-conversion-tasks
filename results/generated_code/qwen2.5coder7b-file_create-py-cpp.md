Sure! Here is the equivalent code in C++:

```cpp
#include <iostream>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;

void create(const std::string& directory) {
    // Create an empty file named "output.txt" with size 0 bytes
    fs::path filePath(directory);
    filePath /= "output.txt";
    std::ofstream ofs(filePath, std::ios::out | std::ios::binary);
    if (!ofs.is_open()) {
        std::cerr << "Failed to create output.txt in directory: " << directory << std::endl;
        return;
    }
    ofs.close();

    // Create an empty directory named "docs"
    filePath /= "docs";
    if (!fs::create_directory(filePath)) {
        std::cerr << "Failed to create docs directory in directory: " << directory << std::endl;
    }
}

int main() {
    try {
        // Create files and directories in the current working directory
        create(".");
        
        // Create files and directories at the filesystem root (requires admin privileges)
        create("/");
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Filesystem error: " << e.what() << std::endl;
    }

    return 0;
}
```

### Explanation:
1. **Namespace `std::filesystem`**: This is used for file system operations.
2. **Function `create(const std::string& directory)`**:
   - Takes a directory path as an argument.
   - Creates an empty file named "output.txt" in the specified directory.
   - Creates an empty directory named "docs" inside the specified directory.
3. **Main Function (`main`)**:
   - Calls `create(".")` to create files and directories in the current working directory.
   - Calls `create("/")` to create files and directories at the filesystem root (note that this requires administrative privileges).

### Note:
- The `fs::create_directory` function returns a boolean indicating whether the directory was successfully created.
- Writing an empty file with `std::ofstream ofs(filePath, std::ios::out | std::ios::binary)` ensures that the file is created with zero bytes.
- Error handling is included to check if files and directories are created successfully.

To convert the given JavaScript code to C++, you can use the `<fstream>` library for file operations and `<filesystem>` (or `<direct.h>`) for directory creation. Here's how you can do it:

```cpp
#include <iostream>
#include <fstream>
#include <filesystem>

// Function to handle errors
void fct(const std::error_code& ec) {
    if (ec) {
        std::cerr << "Error: " << ec.message() << std::endl;
    }
}

int main() {
    try {
        // Current working directory
        std::string currentPath = std::filesystem::current_path().string();

        // Create an empty file in the current working directory
        std::ofstream ofs1(currentPath + "/output.txt");
        if (!ofs1) {
            fct(std::error_code());
        } else {
            ofs1.close();
        }

        // Create a directory in the current working directory
        if (!std::filesystem::create_directory(currentPath + "/docs")) {
            fct(std::error_code());
        }

        // Root directory
        std::string rootPath = "/";
        
        // Create an empty file in the filesystem root (if possible)
        std::ofstream ofs2(rootPath + "/output.txt");
        if (!ofs2) {
            fct(std::error_code());
        } else {
            ofs2.close();
        }

        // Create a directory in the filesystem root (if possible)
        if (!std::filesystem::create_directory(rootPath + "/docs")) {
            fct(std::error_code());
        }
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
```

### Explanation:
1. **Error Handling**: The `fct` function is used to handle errors by printing the error message if an exception occurs.
2. **File Operations**:
   - `std::ofstream ofs1(currentPath + "/output.txt");` creates and opens a new file named "output.txt" in binary mode. If the file already exists, it will be truncated.
   - `ofs1.close();` closes the file after writing.
3. **Directory Creation**:
   - `std::filesystem::create_directory(currentPath + "/docs");` attempts to create a directory named "docs" in the current working directory.
4. **Root Directory**:
   - The code tries to create files and directories in the root directory, but this might not work on all systems due to permission restrictions.

### Notes:
- Ensure that your C++ compiler supports `<filesystem>`. If it doesn't (for example, older versions of GCC), you can use `<direct.h>` for directory creation.
- Running these operations might require appropriate permissions. Make sure your program is run with the necessary privileges to create files and directories in specified locations.

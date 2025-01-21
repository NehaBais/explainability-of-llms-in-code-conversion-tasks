Sure! Here is the equivalent code in C++:

```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

void printStat(const fs::path& p) {
    try {
        if (fs::exists(p)) {
            if (fs::is_regular_file(p)) {
                std::cout << p << " is a file" << std::endl;
            } else if (fs::is_directory(p)) {
                std::cout << p << " is a directory" << std::endl;
            }
        } else {
            std::cout << p << " does not exist" << std::endl;
        }
    } catch (const fs::filesystem_error& e) {
        std::cerr << "Filesystem error: " << e.what() << std::endl;
    }
}

int main() {
    printStat("input.txt");
    printStat("/input.txt");
    printStat("docs");
    printStat("/docs");
    return 0;
}
```

### Explanation:
1. **Namespace**: We use `std::filesystem` to handle file and directory operations.
2. **printStat Function**:
   - The function checks if the path exists using `fs::exists(p)`.
   - If it exists, it further checks if it is a regular file or a directory using `fs::is_regular_file(p)` and `fs::is_directory(p)`, respectively.
   - If the path does not exist, it prints that it does not exist.
3. **main Function**:
   - Calls `printStat` with the specified paths: `"input.txt"`, `"/input.txt"`, `"docs"`, and `"/docs"`.

### Compilation:
To compile this C++ code, you need to enable the C++17 standard or later since `std::filesystem` is part of C++17. You can use a compiler like `g++`:

g++ -std=c++17 -o verify_files verify_files.cpp

### Running:
After compiling, run the executable:

./verify_files

This will check for the existence and type (file or directory) of the specified paths in both the current working directory and the filesystem root.

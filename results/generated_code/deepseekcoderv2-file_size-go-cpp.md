 Sure, here is the equivalent code in C++:

```cpp
#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

void printFileSize(const std::string& filename) {
    try {
        auto path = std::filesystem::path(filename);
        if (std::filesystem::exists(path)) {
            auto size = std::filesystem::file_size(path);
            std::cout << size << std::endl;
        } else {
            std::cerr << "File does not exist: " << filename << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}

int main() {
    printFileSize("input.txt");
    printFileSize("/input.txt");
    return 0;
}
```

### Explanation:
1. **Include Necessary Headers**: We include `<iostream>` for input/output operations, `<fstream>` for file handling, `<string>` for string manipulation, and `<filesystem>` for filesystem path manipulations.
2. **Function `printFileSize`**: This function takes a filename as an argument and checks if the file exists using `std::filesystem::exists`. If it does, it prints the size of the file using `std::filesystem::file_size`. If not, it prints an error message.
3. **Main Function**: Calls `printFileSize` for both "input.txt" (relative path) and "/input.txt" (absolute path).

This C++ code should provide similar functionality to the original Go program.

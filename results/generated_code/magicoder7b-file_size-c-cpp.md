 Here is the equivalent C++ code:

```cpp
#include <iostream>
#include <filesystem>

int main() {
    auto fileSize = [](const std::string& path) {
        namespace fs = std::filesystem;
        if(fs::exists(path)) {
            return fs::file_size(path);
        } else {
            throw std::runtime_error("File does not exist");
        }
    };

    try{
        std::cout << "Size of current directory's 'input.txt': " << fileSize("./input.txt") << '\n';
        std::cout << "Size of root directory's 'input.txt': " << fileSize("/input.txt") << '\n';
    } catch(const std::exception& e) {
        std::cerr << e.what() << "\n";
        return 1;
    }

    return 0;
}
```
This code uses the `<filesystem>` library introduced in C++17, which provides high-level interfaces for dealing with file system operations. The `file_size` function will throw an exception if the file does not exist, which is caught and handled by printing out a message to stderr.

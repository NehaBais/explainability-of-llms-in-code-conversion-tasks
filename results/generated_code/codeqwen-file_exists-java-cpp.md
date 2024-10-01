The equivalent C++ code would be:

```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    if (fs::exists("docs/input.txt") && fs::is_directory("docs"))
        std::cout << "File and directory exist." << std::endl;
    else
        std::cout << "Either file or directory does not exist." << std::endl;

    if (fs::exists("/docs/input.txt") && fs::is_directory("/docs"))
        std::cout << "File and directory exist in root." << std::endl;
    else
        std::cout << "Either file or directory does not exist in root." << std::endl;

    return 0;
}
```
This code utilizes the filesystem library of C++, which allows for an easier handling of file and directory existence checking. The `exists` function checks if a file/directory exists and `is_directory` checks whether it is a directory or not.

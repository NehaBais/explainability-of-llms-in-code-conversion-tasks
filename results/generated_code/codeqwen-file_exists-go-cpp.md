The equivalent C++ code for the given Golang code would look like:

```cpp
#include <iostream>
#include <filesystem>
namespace fs = std::filesystem;

void printStat(const std::string& p) {
    if (!fs::exists(p)) {
        std::cout << "Error: Path does not exist\n";
        return;
    }
   
    if (fs::is_directory(p)) {
        std::cout << p << " is a directory\n";
    } else if (fs::is_regular_file(p)) {
        std::cout << p << " Is a file\n";
    } else {
        std::cout << p << " Is something other than a regular file or directory.\n";
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
Please note that the `<filesystem>` library in C++17 and onwards is used to handle file system related tasks. The code will print out whether the path exists, if it's a directory or a regular file. It also checks for any errors while executing.

Also, please note that '/input.txt' and '/docs' are different from 'input.txt' and 'docs', as C++ treats paths starting with '/' as absolute paths.

```cpp
#include <iostream>
#include <filesystem>

void printFileSize(const std::string& f) {
    try {
        auto stat = std::filesystem::status(f);
        std::cout << stat.file_size() << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }
}

int main() {
    printFileSize("input.txt");
    printFileSize("/input.txt");
    return 0;
}
```

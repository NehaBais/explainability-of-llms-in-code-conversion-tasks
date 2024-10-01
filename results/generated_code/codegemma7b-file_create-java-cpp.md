```cpp
#include <iostream>
#include <fstream>
#include <filesystem>

int main() {
    try {
        std::ofstream("output.txt");
        std::ofstream(std::filesystem::root_path() / "output.txt");
        std::filesystem::create_directory("docs");
        std::filesystem::create_directory(std::filesystem::root_path() / "docs");
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}
```

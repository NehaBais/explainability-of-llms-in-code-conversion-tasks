```cpp
#include <filesystem>

int main() {
    // Current working directory
    std::filesystem::rename("input.txt", "output.txt");
    std::filesystem::rename("docs", "mydocs");

    // Filesystem root
    std::filesystem::rename("/input.txt", "/output.txt");
    std::filesystem::rename("/docs", "/mydocs");

    return 0;
}
```

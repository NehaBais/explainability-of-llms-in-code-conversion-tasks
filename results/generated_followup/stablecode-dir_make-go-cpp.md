Error: expected namespace name
Fix: Replace `namespace fs = std::filesystem;` with `using namespace std::filesystem;`.
Corrected Code:
```cpp
#include <iostream>
#include <filesystem>

int main() {
    std::string path = "/tmp/some/path/to/dir";

    try {
        create_directories(path);
        std::cout << "Directories created successfully.\n";
    } catch (const filesystem_error& e) {
        std::cerr << "Error: " << e.what() << "\n";
    }

    return 0;
}
```

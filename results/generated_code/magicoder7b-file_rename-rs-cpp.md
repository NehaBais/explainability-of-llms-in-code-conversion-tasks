 The equivalent C++ code would be:

```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

int main() {
    try {
        fs::rename("input.txt", "output.txt");
        fs::rename("docs", "mydocs");
        fs::rename("/input.txt", "/output.txt");
        fs::rename("/docs", "/mydocs");
    } catch (const std::filesystem::filesystem_error& e) {
        std::cerr << "File move error: " << e.what() << '\n';
    }

    return 0;
}
```
Note that error handling in C++ is different than Rust. If a file move operation fails, it will throw an exception which we are catching and displaying the message of. This approach requires C++17 or later to have std::filesystem.

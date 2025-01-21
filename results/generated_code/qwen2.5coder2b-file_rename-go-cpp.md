The equivalent code in C++ would look like this:

```cpp
#include <iostream>
#include <filesystem>

void renameFiles() {
    std::filesystem::rename("input.txt", "output.txt");
    std::filesystem::rename("docs", "mydocs");
    std::filesystem::rename("/input.txt", "/output.txt");
    std::filesystem::rename("/docs", "/mydocs");
}

int main() {
    renameFiles();
    return 0;
}
```

Please note that this code uses the C++17 filesystem library to perform file operations. If you don't have access to this library, you can use `std::rename` function instead.

Also, remember that you should include `#include <filesystem>` before using any filesystem functions.

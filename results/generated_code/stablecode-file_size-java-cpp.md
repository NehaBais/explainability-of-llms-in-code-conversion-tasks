Here is the equivalent C++ code:

```cpp
#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path fileAPath("file.txt");
    uintmax_t sizeA = std::filesystem::file_size(fileAPath);
    std::cout << "File A: " << sizeA << " bytes" << std::endl;

    std::filesystem::path fileBPath("/file.txt");
    uintmax_t sizeB = std::filesystem::file_size(fileBPath));
    std::cout << "File B: " << sizeB << " bytes" << std::endl;

    return 0;
}
```
Please note that C++17 is required to use the `<filesystem>` library. Make sure your compiler supports this standard, and enable it in your project settings if necessary.

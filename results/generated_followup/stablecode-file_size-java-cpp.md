Fix explanation:

1. Install a C++17 compliant compiler.
2. Modify the code to use the `<experimental/filesystem>` header, which is currently available as an experimental feature in the C++ standard library.

Corrected code:

```cpp
#include <iostream>
#include <experimental/filesystem>

int main() 
{
    std::experimental::filesystem::path fileAPath("file.txt");
    uintmax_t sizeA = std::experimental::filesystem::file_size(fileAPath);
    std::cout << "File A: " << sizeA << " bytes" << std::endl;

    std::experimental::filesystem::path fileBPath("/file.txt");
    uintmax_t sizeB = std::experimental::filesystem::file_size(fileBPath));
    std::cout << "File B: " << sizeB << " bytes" << std::endl;

    return 0;
}
```

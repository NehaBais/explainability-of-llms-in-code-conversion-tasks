C++ doesn't have built-in support for file system operations in the way JavaScript does with ActiveXObject. However, you can use the Standard Template Library (STL) to perform these tasks.

```cpp
#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::rename("input.txt", "output.txt");
    std::filesystem::rename("/input.txt", "/output.txt");

    std::filesystem::rename("docs", "mydocs");
    std::filesystem::rename("/docs", "/mydocs");

    return 0;
}
```

This code first includes the necessary header for filesystem operations. It then renames files and directories in both the current working directory and the root of the filesystem (denoted by `/`).

Please note that this code will not work properly on Windows without a few adjustments. The `std::filesystem` namespace was introduced in C++17, which is not yet fully supported everywhere, so be sure to compile it with a compatible compiler version.

Also, remember to check if the files or directories exist before renaming them to avoid exceptions.

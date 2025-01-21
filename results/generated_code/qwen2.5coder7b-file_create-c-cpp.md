Here is the C++ version of your code:

```cpp
#include <fstream>
#include <filesystem>

int main() {
    // Permissions are before umask
    std::ofstream ofs("output.txt", std::ios::out | std::ios::trunc);
    if (ofs.is_open()) {
        ofs.close();
    }

    std::filesystem::create_directory("docs");

    return 0;
}
```

This C++ version does the same thing as your original C code: it creates an empty file named "output.txt" in the current working directory and an empty directory named "docs". It uses `std::ofstream` to create the file and `std::filesystem::create_directory` to create the directory.

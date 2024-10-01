In C++, the functionality to rename files and directories is provided in the filesystem library. Here's how you can perform these operations twice, i.e., once in the current working directory and once in the root:

```cpp
#include <iostream>
#include <filesystem>

int main() {
    // In current working directory

    std::filesystem::rename("input.txt", "output.txt");
    std::filesystem::rename("docs", "mydocs");

    // In filesystem root
    try {
        std::filesystem::rename("/", "/input.txt", std::filesystem::rename_options::replace_existing);
        std::filesystem::rename("/", "/docs", std::filesystem::rename_options::replace_existing);
    } catch(const std::exception& e) {
        std::cerr << "Error renaming in filesystem root: " << e.what() << '\n';
    }

    return 0;
}
```

Note that the renaming of files/directories at the filesystem root will depend on the specific file system and permissions. On Windows, for example, changing the name of a file or directory at the root might require administrative rights.

Moreover, in the context of C++, `/` is considered as the path to the root directory. Please replace it with the actual path if different.
Also, remember that `std::filesystem::rename()` throws an exception if the operation fails. This is why there's a try-catch block for the filesystem root renaming operations.

Lastly, please keep in mind that the `std::filesystem` library was introduced in C++17, so make sure your compiler supports it and compile with the appropriate flags (e.g., `-std=c++17`).

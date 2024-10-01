```cpp
#include <filesystem>

void mkdirp(const std::string& path) {
    std::filesystem::path p(path);
    std::filesystem::create_directories(p);
}
```

**Usage:**

mkdirp("/tmp/some/path/to/dir");

**Explanation:**

* The `mkdirp()` function takes a single path string as input.
* It converts the path string to a `std::filesystem::path` object.
* It then calls the `create_directories()` function to create the directory and any missing parents.
* If the directory already exists, the function returns successfully.

**Cross-Platform Compatibility:**

The `std::filesystem::create_directories()` function is available on most modern operating systems, including Windows, macOS, Linux, and macOS. Therefore, the code is cross-platform compatible.

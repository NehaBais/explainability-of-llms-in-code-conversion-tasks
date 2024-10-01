```cpp
#include <filesystem>

void mkdirp(const std::string& path) {
    std::filesystem::create_directories(path);
}

int main() {
    mkdirp("./path/to/dir");

    return 0;
}
```

**Explanation:**

* The `mkdirp()` function takes a single path string as input.
* It uses the `std::filesystem::create_directories()` function to create the directory and any missing parents.
* The `exist_ok` argument is not explicitly needed in C++, as it is the default behavior of `create_directories()`.

**Notes:**

* The `std::filesystem` header is required for this code to compile.
* The function works cross-platform, as `create_directories()` is available on most modern operating systems.
* If the directory already exists, the function will not throw an error.

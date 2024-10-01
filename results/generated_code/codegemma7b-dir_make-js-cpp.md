```cpp
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

void mkdirp(const std::string& path) {
  try {
    fs::create_directories(path);
  } catch (const fs::filesystem_error& e) {
    if (e.code() == fs::errc::directory_exists) {
      // Directory already exists, nothing to do.
      return;
    } else {
      // Error creating directory.
      throw e;
    }
  }
}

int main() {
  mkdirp("./path/to/dir");
  return 0;
}
```

**Explanation:**

* The `mkdirp` function takes a single path string as input.
* It uses the `create_directories` function from the `<filesystem>` namespace to create the directory.
* If the directory already exists, it silently returns.
* If an error occurs, it throws an exception unless the error code is `directory_exists`.

**Cross-Platform Support:**

The code works equally well across Windows, macOS, and Linux platforms.

**Note:**

* The `mkdirp` function does not handle file permissions.
* The `create_directories` function may create intermediate directories that already exist.

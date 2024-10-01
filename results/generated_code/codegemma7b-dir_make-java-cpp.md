```cpp
#include <filesystem>

namespace fs = std::filesystem;

void mkdir_p(const std::string& path) {
  try {
    fs::create_directories(path);
    std::cout << "Path successfully created" << std::endl;
  } catch (const std::exception& e) {
    std::cerr << "Error creating directory: " << e.what() << std::endl;
  }
}

int main() {
  mkdir_p("C:/parent/test");
  return 0;
}
```

**Explanation:**

* The `mkdir_p()` function takes a single path string as input.
* It uses the `create_directories()` function from the `<filesystem>` header to create the directory and any missing parents.
* If the directory already exists, it does not throw an error.
* The function catches any exceptions and prints an error message to the standard error stream.

**Cross-Platform Compatibility:**

The `mkdir_p()` function is implemented in a cross-platform manner using the `<filesystem>` header, which is supported by most modern C++ compilers.

**Note:**

* The `mkdir_p()` function does not check if the path is a valid directory path.
* It is recommended to validate the path before calling the function.

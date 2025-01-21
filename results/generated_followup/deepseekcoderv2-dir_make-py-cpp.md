 The error occurs because the `std::filesystem` namespace is not part of the C++ standard library until C++17. If you are using an older version of GCC or Clang that does not support C++17, this will result in a compilation error.

The fix involves ensuring that your compiler supports C++17 and then including the necessary headers:

```cpp
#include <filesystem>
#include <iostream>

void mkdirp(const std::string &path) {
  try {
    // Create the directory, creating parents as needed
    std::filesystem::create_directories(path);
    std::cout << "Directory created successfully: " << path << std::endl;
  } catch (const std::filesystem::filesystem_error &e) {
    std::cerr << "Error creating directory: " << e.what() << std::endl;
  }
}

int main() {
  // Example usage
  mkdirp("./path/to/dir");
  return 0;
}
```

 The error is due to the fact that `std::filesystem` was not introduced until C++17, and the compiler might be set to use an older standard version or a different compiler that doesn't support `<filesystem>`.

The fix is to ensure you are using a compiler that supports C++17 or later. If you are using GCC or Clang, you can specify the standard with the `-std` flag:

```cpp
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

void MkdirAll(const std::string &path) {
  try {
    if (fs::create_directories(path)) {
      std::cout << "Directory created successfully: " << path << std::endl;
    } else {
      std::cout << "Directory already exists: " << path << std::endl;
    }
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Filesystem error occurred: " << e.what() << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "General exception occurred: " << e.what() << std::endl;
  }
}

int main() {
  MkdirAll("/tmp/some/path/to/dir");
  return 0;
}
```

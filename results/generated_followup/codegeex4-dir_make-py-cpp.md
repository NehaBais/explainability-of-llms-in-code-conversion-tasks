The error occurs because `std::filesystem` is not a part of all C++ standard libraries, it's added in C++17 version. Some compilers might not fully support this feature yet.

To fix it, we need to make sure that the compiler supports C++17 and include the proper header for filesystem.

Corrected code:

```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

void mkdirp(const std::string &path) {
  try {
    fs::create_directories(path);
  } catch (const std::exception &e) {
    // If directory already exists, no exception will be thrown.
    if (!fs::exists(path)) {
      throw;
    }
  }
}

int main() {
  mkdirp("./path/to/dir");
  return 0;
}
```

Error: `std::filesystem` is not available until C++17 or later.

Fix: The solution requires compiling the code using a compiler that supports C++17 or later, such as GCC 7.0 or later, Clang 4.0 or later, or MSVC v19.14 or later.

Corrected Code:
```cpp
#include <filesystem>
#include <iostream>

void mkdirp(const std::string &p) {
  try {
    std::filesystem::create_directories(p);
  } catch (std::exception &e) {
    std::cerr << "Error creating directory: " << p << "\n" << e.what() << '\n';
  }
}

int main() {
  mkdirp("./path/to/dir");
  return 0;
}
```

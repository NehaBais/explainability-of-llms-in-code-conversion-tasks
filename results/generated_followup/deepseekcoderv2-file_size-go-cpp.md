 The errors and warnings are due to the fact that `std::filesystem` is not part of the C++ standard library until C++17, but the compiler might be using an older version that doesn't support this feature. To fix this issue, you should ensure your compiler supports C++17 or later.

### Fix in Single Line:
Ensure your compiler supports C++17 and use `-std=c++17` flag during compilation.

```cpp
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

void printFileSize(const std::string &filename) {
  try {
    auto path = std::filesystem::path(filename);
    if (std::filesystem::exists(path)) {
      auto size = std::filesystem::file_size(path);
      std::cout << size << std::endl;
    } else {
      std::cerr << "File does not exist: " << filename << std::endl;
    }
  } catch (const std::exception &e) {
    std::cerr << "Error: " << e.what() << std::endl;
  }
}

int main() {
  printFileSize("input.txt");
  printFileSize("/input.txt");
  return 0;
}
```

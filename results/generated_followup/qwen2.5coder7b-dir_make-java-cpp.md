**Error Explanation:**
The error occurs because the `<filesystem>` header needs to be included before using `std::filesystem`.

**Fix:**
Include the `<filesystem>` header at the beginning of your file.

**Corrected Code:**

```cpp
#include <filesystem>
#include <iostream>

namespace fs = std::filesystem;

bool createDirectory(const std::string &path) {
  try {
    if (fs::create_directories(path)) {
      std::cout << "path successfully created" << std::endl;
      return true;
    } else {
      std::cerr << "failed to create directory" << std::endl;
      return false;
    }
  } catch (const fs::filesystem_error &e) {
    std::cerr << "file system error: " << e.what() << std::endl;
    return false;
  } catch (...) {
    std::cerr << "unknown error occurred" << std::endl;
    return false;
  }
}

int main() {
  std::string path = "C:/parent/test";
  createDirectory(path);
  return 0;
}
```

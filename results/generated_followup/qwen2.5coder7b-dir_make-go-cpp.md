**Error Explanation:**
The error occurs because the `<filesystem>` header was not included, which is necessary for using `std::filesystem` namespace.

**Fix Explanation:**
Include the `<filesystem>` header at the beginning of your file.

Here is the corrected code in a single code block:

```cpp
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

void createDirectory(const std::string &path) {
  try {
    fs::create_directories(path);
    std::cout << "Directory created successfully: " << path << std::endl;
  } catch (const fs::filesystem_error &e) {
    std::cerr << "Error creating directory: " << e.what() << std::endl;
  }
}

int main() {
  std::string path = "/tmp/some/path/to/dir";
  createDirectory(path);
  return 0;
}
```

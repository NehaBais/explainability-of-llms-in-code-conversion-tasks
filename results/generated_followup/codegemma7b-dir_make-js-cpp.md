The error occurs because the `<filesystem>` header is not included. The fix is to include the header.

```cpp
#include <filesystem>
#include <string>

namespace fs = std::filesystem;

void mkdirp(const std::string &path) {
  try {
    fs::create_directories(path);
  } catch (const fs::filesystem_error &e) {
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

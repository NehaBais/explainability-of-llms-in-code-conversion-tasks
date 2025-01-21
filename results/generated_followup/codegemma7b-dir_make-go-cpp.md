The error occurs because the `<filesystem>` header is not included. The fix is to include the header.

```cpp
#include <filesystem>

void mkdirp(const std::string &path) {
  std::filesystem::path p(path);
  std::filesystem::create_directories(p);
}
```

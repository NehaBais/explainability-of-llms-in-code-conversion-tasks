The error occurs because the `std::filesystem` header is missing in the code. The fix is to include the header.

```cpp
#include <filesystem>

void mkdirp(const std::string &path) {
  std::filesystem::create_directories(path);
}

int main() {
  mkdirp("./path/to/dir");

  return 0;
}
```

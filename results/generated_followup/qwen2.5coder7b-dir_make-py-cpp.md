**Error Explanation:**
The error occurs because `std::filesystem` is not available by default in older versions of GCC or Clang (before C++17 was fully supported). The compiler does not recognize `std::filesystem`.

**Fix Explanation:**
To fix this, you need to enable the C++17 standard when compiling your code. This can be done by adding the `-std=c++17` flag to your compilation command.

Here is the corrected code in a single code block:

```cpp
#include <iostream>
#include <filesystem>

void mkdirp(const std::string &path) {
  if (!std::filesystem::exists(path))
    std::filesystem::create_directories(path);
}

int main() {
  mkdirp("./path/to/dir");
  return 0;
}
```

This command ensures that the C++17 standard is used during compilation, allowing `std::filesystem` to be recognized.
